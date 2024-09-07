#include "stdafx.h"
#include <stdio.h>

int main()
{
       int userInput;

       printf("Enter an integer value between 1 and 100: ");
       scanf_s("%d" , &userInput);
 
       if (userInput <= 100 && userInput >= 1)
          {
              printf("Ok!\n");
          }
      else if (userInput > 100 || userInput <1)
         {
              printf("Error! Out of Range...");
         }

return 0;
}