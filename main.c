#include <stdio.h>
#include <stdlib.h>
#include "./files/main.h"

int main()
{

    char c, str[80];
    enter_string(str);
    scanf("%c", &c); //输入要求删除的字符
    delete_string(str, c);

    print_string(str);

    system("pause");

    return 0;
}