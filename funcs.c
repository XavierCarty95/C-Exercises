#include <stdio.h>
#include <cs50.h>

int larger(int a,int b)
{
    if(a > b)
        return a;
    return b;
}


int main()

{

    int greatest = larger(100,1000) ;
    printf("%i is bigger",greatest);
    return 0;
}

