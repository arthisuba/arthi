#include<stdio.h>
int main()
{
char f;
printf("enter the character :");
scanf("%c",&f);
if((f>='a' && f<='z'))||((f>='A' && f<='Z'))
{
printf("the character is alphabet");
}
else
{
printf("the character is not alphabet")-;
}
return 0;
}
