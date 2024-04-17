// *
// * *
// * * *
// * * * *
// * * * * *

// 1
// 1 2
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 


#include <stdio.h>
void main()
{
      int count;
      printf("enter number : ");
      scanf("%d",&count);

      // int count=1;
      for (int j = 1; j <= count; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("*");
            }
            printf("\n");
            // count+=1;
      }

      // for(int i=1;i<=2;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=3;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=5;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}