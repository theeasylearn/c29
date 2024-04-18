// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <stdio.h>
void main()
{
      // int count = 0;
      int count;
      printf("enter number : ");
      scanf("%d",&count);

      for (int j = 1; j <= count; j++)
      {
            // count += 1;
            for (int i = 1; i <= j; i++)
            {
                  printf("%d", j);
            }
            printf("\n");
      }

      // count=count+1;
      // count+=1;
      // for(int i=1;i<=2;i++)
      // {
      //       printf("%d",count);
      // }
      // printf("\n");

      // count+=1;
      // for(int i=1;i<=3;i++)
      // {
      //       printf("%d",count);
      // }
      // printf("\n");

      // count+=1;
      // for(int i=1;i<=4;i++)
      // {
      //       printf("%d",count);
      // }
      // printf("\n");
}