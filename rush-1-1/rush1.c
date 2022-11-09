/*
** EPITECH PROJECT, 2022
** line
** File description:
** rush1
*/

#include <unistd.h>

void my_putchar(char c);

int line_horizontal(int x)
{
    if (x == 1)
        my_putchar('o');
    if (x == 2) {
        my_putchar('o');
        my_putchar('o');
    }
    if (x > 2) {
        my_putchar('o');
        for (int i = 0; i < x - 2; i++)
            my_putchar('-');
        my_putchar('o');
    }
    my_putchar('\n');
    return 0;
}

int line_vertical(int x, int y)
{
    if (y < 3)
        return 84;
    if (y >= 3 && x == 1) {
        for (int i = 0; i < y - 2; i++) {
            my_putchar('|');
            my_putchar('\n');
        }
        return 0;
    }
    for (int i = 0; i < y - 2; i++) {
        my_putchar('|');
        for (int j = 0; j < x - 2; j++)
            my_putchar(' ');
        my_putchar('|');
        my_putchar('\n');
    }
    return 0;
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (y == 1) {
        line_horizontal(x);
        return;
    }
    line_horizontal(x);
    line_vertical(x, y);
    line_horizontal(x);
}
