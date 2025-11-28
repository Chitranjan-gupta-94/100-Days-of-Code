//Write a program to input three numbers and find the largest among them using if–else.

# include <stdio.h>

int a,b,c;

int main()
{
    printf("Enter 3 Number : ");
    scanf("%d %d %d",&a,&b,&c);

    if ( a >= b && a >= c)
    {
        printf("%d id the Largest number.\n",a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d id the Largest number.\n",b);
    }
    else
    {
        printf("%d id the Largest number.\n",c);
    }

    return 0;
}