#include <stdio.h>

int main(void)

{

    int Phonenumber;
    printf("Input your phone number \n");
    scanf("%d", &Phonenumber);
    printf("\nYou've entered: %d \n", Phonenumber);

    int numerology = 0;

    while (Phonenumber > 9)
    {
        numerology += Phonenumber%10;
        Phonenumber = Phonenumber/10;
    }
        numerology += Phonenumber;

    int final = 0;

    while (numerology > 9 && numerology != 11 && numerology !=22 && numerology !=33)
    {
        final += numerology%10;
        numerology = numerology/10;
    }
        final += numerology;

    printf ("Your numerology for the phone number is: %i \n", final);

    return 0;
}
