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
    
    // get second to last number
    int n = (card / 10) % 10;
    
    // update value to n * 2
    value += n * 2;
    
    // update card number
    card /= 100;
    
    // get second to last number, 2
    n = (card / 10) % 10;
    
    // update value to n * 2, 2
    value += n * 2;
    
    // update card number, 2
    card /= 100;
    
    printf("Second to last number is: %i\n", n);
    printf("The value is: %i\n", value);
    printf("The card is now: %lli\n", card);
}
