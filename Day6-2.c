//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

# include <stdio.h>

int a;

int main()
{
    printf("Enter an intiger: ");
    scanf("%d",&a);

    if(a >= 0){
        if(a == 0){
            printf("%d It is zero.\n", a);
        }
        else{
            printf("%d It is positive number.\n",a);
        }
    }else{
        printf("%d It is negative number.\n",a);
    }

    return 0;
}