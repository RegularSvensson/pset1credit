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
}
