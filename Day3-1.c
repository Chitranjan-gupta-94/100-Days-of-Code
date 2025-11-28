//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){

    float c, f;

    printf("Enter the temperature in celcius: ");
    scanf("%d", &c);

    //Formula for converting celcius to feranithe 
    f=(c*9/5)+32;

    printf("The temperature in feranithe: %.2f\n ", f);

    return 0;


}