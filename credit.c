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
    
    printf("The value is: %i\n", value);
}
