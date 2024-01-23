#include <stdio.h>

int main()
{
    int a;
    printf("\033c");
    scanf("%d",&a);
    printf("%d",a);
    return 0;
}