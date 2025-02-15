//Write a Program to find the Add,aub,mul,div of two numbers entered by the user.
#include<stdio.h>
int main(){
int a,b,Add,sub,Mul,Div;
printf("enter the tow numbers:");
scanf("%d %d",&a,&b);
Add=a+b;
sub=a-b;
Mul=a*b;
Div=a/b;
printf("Add:%d",Add);
printf("\nsub:%d",sub);
printf("\nMul:%d",Mul);
printf("\nDiv:%d",Div);
return 0;
}
/*OUTPUT
enter the tow numbers:1 2
Sum:3
sub:-1
Mul:2
Div:0*/

