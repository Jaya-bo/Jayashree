#include <stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("enter a character;");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("uppercase\n");
    }
    else
    {
        printf("lowercase\n");
    }
}