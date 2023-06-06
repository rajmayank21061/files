#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,num=9;
    printf("%d\n",a);
    printf("%d\n",b);
    for(c=0;c<=num-2;c++)
    {
        d=a+b;
        printf("%d\n",d);
        a=b;
        b=d;
    }
    return 0;
}