// v1. check50 :) (OBS! Style :| ) 
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
    
    // initialize value to 0
    int value = 0;
    
    // initialize cardLength to number of loops needed
    int cardLength = 16 / 2;
    
    // initialize cardNumber as card
    long long cardNumber = card;
    
    // initialize cardCopy as card
    long long cardCopy = card;

    // declare boolean valid
    bool valid;
    
    // loop through card numbers
    for(int i = 0; i < cardLength; i++)
    {
        // initialize n as second-to-last card number
        int n = (card / 10) % 10;
        
        // multiply number by 2
        int nDouble = n * 2;
        
        // add digits to value
        if (nDouble < 10)
        {
            value += nDouble;
        }
        else
        {
            int firstDigit = nDouble / 10;
            int lastDigit = nDouble % 10;
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
    
    // check if input is valid
    if (value % 10 == 0)
    {
        valid = true;
    }
    else 
    {
        valid = false;
    }
    
    // print card type or invalid
    if (valid)
    {
        if (cardNumber / 10000000000000 == 34 || cardNumber / 10000000000000 == 37)
        {
            printf("AMEX\n");
        }
        if (cardNumber / 100000000000000 >= 51 && cardNumber / 100000000000000 <= 55)
        {
            printf("MASTERCARD\n");
        }
        if (cardNumber / 1000000000000 == 4 || cardNumber / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
