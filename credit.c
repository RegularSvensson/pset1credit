// include libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // print prompt to user
    printf("Number: ");
    
    // initialize number as user input
    long long card = GetLongLong();
    
    // print number to user
    printf("You chose: %lli\n", card);
    
    // initialize value to 0
    int value = 0;
    
    // initialize cardLength to number of loops needed
    int cardLength = card / 2;
    
    // loop through card numbers
    for(int i = 0; i < cardLength; i++)
    {
        // initialize n as second-to-last card number
        int n = (card / 10) % 10;
        
        // multiply number by 2
        int n2 = n * 2;
        
        // remove 2 last digits of card number for next loop
        card /= 100;
    }


    // print resulting value
    printf("The value is: %i\n", value);
}
