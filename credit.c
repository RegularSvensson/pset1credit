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
    int cardLength = 16 / 2;
    
    // initialize cardCopy as card
    long long cardCopy = card;
    
    // loop through card numbers
    for(int i = 0; i < cardLength; i++)
    {
        // initialize n as second-to-last card number
        int n = (card / 10) % 10;
        
        // multiply number by 2
        int n2 = n * 2;
        
        // add digits to value
        if (n2 < 10)
        {
            value += n2;
        }
        else
        {
            int firstDigit = n2 / 10;
            int lastDigit = n2 % 10;
            value += firstDigit + lastDigit;
        }
        
        // remove 2 last digits of card number for next loop
        card /= 100;
    }
    
    // loop through card numbers
    for (int i = 0; i < cardLength; i++)
    {
        // initialize n as last card number
        int n = cardCopy % 10;
        
        // add digits to value
        value += n;
        
        // remove 2 last digits of card number for next loop
        cardCopy /= 100;
    }
    
    // declare boolean valid
    bool valid;
    

    // print resulting value
    printf("The value is: %i\n", value);
}
