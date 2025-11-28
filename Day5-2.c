//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

# include <stdio.h>

int main()
{
    int h, m, s, a;

    printf("Enter the time in seconds: ");
    scanf("%d", &a);

    h= a / 3600;
    m= (a % 3600) /60;
    s= a % 60;

    printf("Time will be %d hours : %d minutes : %d seconds.", h, m, s);

    return 0;

}