#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for x
    int x = get_int("x: ");

    //prompt user for y
    int y = get_int("y: ");

    printf("x + y = %i\n", x+y);
    printf("x - y = %i\n", x-y);
    printf("x * y = %i\n", x*y);
    printf("x / y = %i\n", x/y);
    printf("x mod y = %i\n", x%y);


}