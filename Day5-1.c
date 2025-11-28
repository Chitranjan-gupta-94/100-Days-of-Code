//Find SI and CI
 
# include <stdio.h>
# include <math.h> // we will use math.h for pow(power in math terms);

int main()
{
    float p, r, t, SI, CI, amount;

    printf("Enter principal amount: ");
    scanf("%f",&p);

    printf("Enter rate of intrest: ");
    scanf("%f",&r);

    printf("Enter time in years: ");
    scanf("%f",&t);

    SI=(p*r*t)/100;
    amount=p* pow((1+ r/100),t);
    CI=amount-p;

    printf("The Simple intrest is %f\n and compound intrest is %f", SI, CI);

    return 0;

}