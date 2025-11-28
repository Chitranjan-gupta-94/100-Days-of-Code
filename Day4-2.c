//Write a program to find and display the sum of the first n natural numbers.

# include <stdio.h>

int main()
{
    int a, i, sum=0;

    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1; i<=a; i++){
        sum=sum+i;
    }

    printf("The sum of the integers  %d is %d \n", a,sum);

    return 0;
}