#include<stdio.h>
int var1=100;
int main()
{
    for(int index=10;index>-1;index--)
    {
        var1=var1/index;
    }
    printf("%d",var1);
    return 0;
}