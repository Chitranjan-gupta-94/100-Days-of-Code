//Write a program to input a year and check whether it is a leap year or not using conditional statements.

# include <stdio.h>

int a;

int main()
{
    printf("Enter a year: ");
    scanf("%d",&a);

    if(a % 400 == 0){
        printf("%d is a leap year.\n",a);
    }
    else if (a % 100 == 0){
        printf("%d is NOT a leep year.\n",a);
    }
    else if(a % 4 == 0){
        printf("%d is a leep year.\n",a);
    }else {
        printf("%d is NOT a leep year.\n",a);
    }

    return 0;

}
