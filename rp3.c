#include<stdio.h>
void main()
{
    int n,a,b,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        b=a%10;
        c=c+b*b*b;
        a=a/10;
    }
    if(n==c)
    printf("Armstrong number",n);
    else
    printf(" Not an armstrong number",n);
}
