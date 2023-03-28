#include <unistd.h>
/**
 * _putchar - returns one character
 * 
 * @c: the character to be printed
 * Return 1 on success 
 * on error, -1 is returned
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);