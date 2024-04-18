// a
// a b
// a b c
// a b c d

// a
// bb
// ccc

#include <stdio.h>
void main()
{
      int count = 96;

      for (int j = 5; j >= 1; j--)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("%c ", count + i);
            }
            printf("\n");
      }

      // for(int i=1;i<=2;i++)
      // {
      //       printf("%c",count+i);
      // }
      // printf("\n");

      // for(int i=1;i<=3;i++)
      // {
      //       printf("%c",count+i);
      // }
      // printf("\n");
}