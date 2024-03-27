//write a program to accept product manifecturing cost & sale price. and then findout profit/loss amount and display with message
#include<stdio.h>
void main()
{
    float manifecturing_cost,sales_price,profit_loss;
    printf("Enter manifecturing cost");
    scanf("%f",&manifecturing_cost);

    printf("Enter sales price");
    scanf("%f",&sales_price);

    if(manifecturing_cost<sales_price) //< > <= >= == !=
    {
        profit_loss = sales_price - manifecturing_cost;
        printf("profit is = %7.2f",profit_loss);
    }
    else 
    {
        profit_loss = manifecturing_cost - sales_price;
        printf("loss is = %7.2f",profit_loss);
    }
    printf("\n good bye");
}