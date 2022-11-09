/*
** EPITECH PROJECT, 2022
** line
** File description:
** rush5
*/

#include <unistd.h>

void my_putchar(char c);

int line_horizontal_top(int x, int y)
{
    if (x == 1 || y == 1) {
        for (int i = 0; i < x; i++)
            my_putchar('B');
    }
    if (x > 1 && y > 1) {
        my_putchar('A');
        for (int i = 0; i < x - 2; i++)
            my_putchar('B');
        my_putchar('C');
    }
    my_putchar('\n');
    return 0;
}

int line_horizontal_down(int x, int y)
{
    if (x == 1 || y == 1)
        for (int i = 0; i < x; i++)
            my_putchar('B');
    if (x > 1 && y > 1){
        my_putchar('C');
        for (int i = 0; i < x - 2; i++)
            my_putchar('B');
        my_putchar('A');
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
            my_putchar('B');
            my_putchar('\n');
        }
        return 0;
    }
    for (int i = 0; i < y - 2; i++) {
        my_putchar('B');
        for (int j = 0; j < x - 2; j++)
            my_putchar(' ');
        my_putchar('B');
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
        line_horizontal_top(x, y);
        return;
    }
    line_horizontal_top(x, y);
    line_vertical(x, y);
    line_horizontal_down(x, y);
}
