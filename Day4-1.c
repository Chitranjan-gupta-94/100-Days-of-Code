//Write a program to swap two numbers without using a third variable.

# include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    a=a+b; //it will give the value of a after ading b ;
    b=a-b; // it will subtract new value of a to b , which will give value of old a; 
    a=a-b; //it will subtract the new value of a to new value of b , which will give the value of old b ;

    printf("The new values after swaping nubers\n");
    printf("First numbet=%d\n",a);
    printf("second number=%d\n",b);

    return 0;

}