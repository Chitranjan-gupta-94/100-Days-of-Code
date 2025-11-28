//Write a program to input a character and check whether it is a vowel or consonant using if–else.

# include <stdio.h>

char voul;

int main()
{
    printf("Enter a letter: ");
    scanf("%c", &voul);

    if (voul == 'a' || voul == 'e' || voul == 'i' || voul == 'o' || voul == 'u' || voul == 'A' || voul == 'E' || voul == 'I' || voul == 'O' || voul == 'U'){
        printf("%c is a vowel.\n",voul);
    }
    else {
        printf("%c is NOT a vowel.\n",voul);
    }

    return 0;

}