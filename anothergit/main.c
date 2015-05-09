#include<stdio.h>
int main()
{
    char* name;
    printf("type in your name: ");
    scanf("%s", &name);
    printf(" hello, %s\n", &name);
    return 0;
}