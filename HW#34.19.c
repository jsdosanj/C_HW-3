/*
Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int type=0;
    int quantity;
    double total=0;
    
    printf("Enter pairs of item numbers and quantities.\n");
    printf("Enter -1 for the item number to end input.\n");
    
    while(type!= -1)
    {
        scanf("%d %d", &type, &quantity);
        switch(type)
        {
            case 1:
                total = total + quantity * 2.98;
                break;
            case 2:
                total = total + quantity * 4.50;
                break;
            case 3:
                total = total + quantity * 9.98;
                break;
            case 4:
                total = total + quantity * 4.49;
                break;
            case 5:
                total = total + quantity * 6.87;
                break;
            default:
                printf("type is wrong:try again\n");
                break;
        }
    printf("Sum of the purchases is :%lf", total);
    }
}
