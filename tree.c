/*
** EPITECH PROJECT, 2019
** tree
** File description:
** CPool Tree
*/

void draw_body(void)
{
    int x = 4;
    int y = 1;

    while (x != 0) {
        for (int i = 1; i < x; i++)
            my_putchar(' ');
        for (int i = 1; i <= y; i++)
            my_putchar('*');
        my_putchar('\n');
        x--;
        y += 2;
    }
}

void draw_trunc(int size)
{
    int line = size;
    int space = 4;

    if (size % 2 != 1)
        size++;
    while (line != 0) {
        for (int i = 1; i < space; i++)
            my_putchar(' ');
        for (int i = 1; i <= size; i++)
            my_putchar('|');
        my_putchar('\n');
        line--;
    }
}

void tree(int size)
{
    if (size <= 0)
        return;
    draw_body();
    draw_trunc(size);
}