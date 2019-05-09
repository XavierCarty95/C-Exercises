#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for x
    float x = get_float("x: ");

    //prompt user for y
    float y = get_float("y: ");

    //Perform division
    printf("x/y = %.7f\n",x/y);
}