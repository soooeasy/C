#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    ch=getchar();
    while(ch!='\n')
    {
        putchar(ch);
        ch=getchar();
    }
    printf("\n");
    ch=getchar();
    while(ch!='\n')
    {
        putchar(ch);
        ch=getchar();
    }
    return 0;
}
