#include <stdio.h>
#include <cs50.h>

void cough();
void spaces();

int main(void)
{
       for(int i = 0; i < 4; i++){
            cough(4);
        }
            for(int i = 0; i < 4; i++){
              spaces(4);
           }









}

void cough(int n){
    for(int i = 0; i < n; i++){
    printf("cough\n");
    }
}

void spaces(int x){
    for(int i = 0; i < x; i++){
        printf("/");
    }
}