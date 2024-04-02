// write a program to findout longest person from 3 person given height;
#include <stdio.h>
void main()
{
    // create 3 variables
    float bipin_height, ankit_height, vedant_height;
    printf("Enter bipins height");
    scanf("%f", &bipin_height);

    printf("Enter ankit height");
    scanf("%f", &ankit_height);

    printf("Enter vedant height");
    scanf("%f", &vedant_height);

    if(ankit_height>bipin_height) // outer if
    {
        if(ankit_height>vedant_height) //inner if
        {
            printf("ankit is longest person");
        }
        else 
        {
            printf("vedant is longest person");
        }
    }
    else 
    {
        if(bipin_height>vedant_height)
        {
            printf("bipin is longest person");
        }
        else 
        {
            printf("vedant is longest person");
        }
    }
    printf("\n good bye");
}