#include <stdio.h>
#include <cs50.h>

void cough(void){
    printf("cough\n");
}



int main(void)
{
    for (int i = 0; i < 3; i++){
        cough();

    }

}

