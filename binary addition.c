/*
 * This program takes 2 binary value as input,
 * first convert both of them into decimal and then add them,
 * and finally provide output in binary format
 */

#include <stdio.h>
#include <stdlib.h>

int binary2decimal();
int decimal = 0;        // global variable

int main()
{
 int quotent;
 int binary[32];
 int i = 1;

   binary2decimal();              // calling binary2decimal function

   quotent = decimal;      // saving binary2decimal() return value in quotent

  while(quotent != 0){
  binary[i] = quotent % 2;
  quotent = quotent / 2;
  i++;
  }

  for(int j=i-1; j>0; j--){
   printf("%d", binary[j]);
  }

return 0;
}



int binary2decimal(){
 int num1, num2;
 int binary;
 int base = 1;
 int rem;

    printf("Enter first binary number <1s & 0s> : ");
    scanf(" %d", &num1);
    printf("Enter second binary number <1s & 0s> : ");
    scanf(" %d", &num2);

    binary = num1 + num2;

    while(binary > 0){
    rem = binary % 10;
    decimal = decimal + rem * base;
    binary /= 10;
    base = base * 2;
    }
 return decimal;
}
