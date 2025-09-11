#include <stdio.h>

int main(){
   int Centigrade;
   printf("Enter value of temperature in Centigrade =");
   scanf("%d", &Centigrade);
   printf("Value of temperature in Fahrenheit = %f", Centigrade*1.8+32);
   return 0;
}