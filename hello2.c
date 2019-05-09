#include <stdio.h>
#include <cs50.h>
int height;
int spaces;
int main()
{
  do {



  height = get_int("What is the height");
 for (int i = 0; i < height; i++){
      //get spaces going the oppossite way
      for (int j = 0; j < height ; j++){
          printf("/ ");
      }
  printf("#\n");
  }

  while(height < 1 || height > 23);

  }

}
