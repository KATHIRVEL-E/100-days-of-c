//C Program to Find the Size of int, float, double and char
#include<stdio.h>
int main(){int integer;
char character;
float floatingpoint;
double doublevalue;

 printf("The size of integer:%u bytes\n",sizeof(int));
 printf("The size of floating point:%u bytes\n",sizeof(float));
 printf("The size of character:%u bytes\n",sizeof(char));
  printf("The size of doublevalue:%u bytes\n",sizeof(double));
  return 0;
}
//output
