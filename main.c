#include <stdio.h>
#include "main.h"

int main()
{
    // extern void enter_string(char str[]);
    // extern void delete_string(char str[], char ch);
    // extern void print_string(char str[]); //对输入函数，删除函数，输出函数的声明

    char c, str[80];
    enter_string(str);
    scanf("%d", &c); //输入要求删除的字符
    delete_string(str, c);

    print_string(str);

    system("pause");

    return 0;
}