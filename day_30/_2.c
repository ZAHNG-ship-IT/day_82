#include <stdio.h>

int main()
{

    char a = 0xb6;//不输出a
    unsigned char a = 0xb6;//输出a
    short b = 0xb600;
    int c = 0xb6000000;
    
    if(a == 0xb6)
        printf("a");
    if(b == 0xb600)
        printf("b");
    if(c == 0xb6000000)
        printf("c");



}
// 单引号用于定义单个字符，双引号用于定义字符串。
// 单引号的值是字符的 ASCII 码，双引号表示一个以 \0 结尾的字符数组。