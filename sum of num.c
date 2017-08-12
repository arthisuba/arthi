#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("enter the value of n");
sacnf("%d",&n);
printf("first %d number are\n",n);
for(i=1;i<=n;i++)
{
printf("%7d",i);
sum=sum+i;
}
printf("\n\nsum=%d",sum);
return 0;
}

