#include <cs50.h>
#include <stdio.h>

void get_positive_int(string prompt);
//prompt user for postivie integer

int main()
{
    get_positive_int(-1);
}




void get_positive_int(string prompt)
{
    int n = 0;
    do
    {
        n = get_int(prompt);
    }
    while(n < 1);
    return n;
}