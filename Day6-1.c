//Write a program to input an integer and check whether it is even or odd using if–else.

# include <stdio.h>

int a;

int main()
{
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("%d Is a even number.\n",a);
    }
    else{
        printf("%d Is not a odd number.\n",a);
    }

    return 0;


}