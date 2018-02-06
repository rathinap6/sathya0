#include<stdio.h>
int main()
{
int r,i,a,c;
printf("Enter any two numbers:");
scanf("%d%d",&r,&i);
while(r<i)
{
c=0;
for(a=2;a<=r/2;++a)
{
if(r%a==0)
{
c=1;
break;
}
}
if(c==0)
printf("%d\n",r);
++r;
}
return 0;
}
