#include <stdarg.h>
#include <unistd.h>

// Convert an integer to a string
// Returns the length of the resulting string
int itoa(char *buffer, int value) {
    int len = 0;
    int sign = value < 0 ? -1 : 1;

    if (value == 0) {
        buffer[len++] = '0';
    } else {
        while (value != 0) {
            buffer[len++] = '0' + sign * (value % 10);
            value /= 10;
        }

        if (sign < 0) {
            buffer[len++] = '-';
        }
    }

    // Reverse the string
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char tmp = buffer[i];
        buffer[i] = buffer[j];
        buffer[j] = tmp;
    }

    return len;
}

// Print a string to stdout
// Returns the number of characters printed
int puts(const char *s) {
    int count = 0;

    while (*s) {
        putc(*s++);
        count++;
    }

    return count;
}

// Print a character to stdout
// Returns the number of characters printed
int putc(char c) {
    char buffer[1];
    buffer[0] = c;
    write(STDOUT_FILENO, buffer, 1);
    return 1;
}

// Print an integer to stdout
// Returns the number of characters printed
int puti(int value) {
    char buffer[32];
    int len = itoa(buffer, value);
    return write(STDOUT_FILENO, buffer, len);
}

// Print a formatted string to stdout
// Returns the number of characters printed
int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    int c = va_arg(args, int);
                    putc(c);
                    count++;
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char*);
                    count += puts(s);
                    break;
                }
                case 'd': {
                    int value = va_arg(args, int);
                    count += puti(value);
                    break;
                }
                case '%': {
                    putc('%');
                    count++;
                    break;
                }
            }
        } else {
            putc(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return count;
}

int main() {
    _printf("Hello, %s!\n", "world");
    _printf("The answer is %d.\n", 42);
    _printf("%%\n");
    return 0;
}