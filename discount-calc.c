#include <stdio.h>
#include "cs50.h"
// new function identification
float discount(float price, float dis);

// main function
int main(void)
{
    // funtions from cs50 library
    float regular = get_float("what's the price: ");
    float sale = get_float("what's the sale: ");
    // new function used here
    float dis = discount(regular, sale);
    printf("sale price: %.2f\n", dis);
}
// new function (what to do)
float discount(float price, float dis)
{
    return price * (100 - dis) / 100;
}