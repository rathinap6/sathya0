#include<stdio.h>
void main()
{
    int a,b,c,d=0,f,i,j;
    printf("Enter the limits:\n");
    scanf("%d%d",&a,&f);
    for(i=a;i<f;i++)
    {
        b=i;
        j=i;
        d=0;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(j==d)
    printf("%d\n",d);
    } 
}
