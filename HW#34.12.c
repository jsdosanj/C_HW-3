// (Calculating the Sum of Even Integers) Write a program that calculates and prints the sum of the even integers from 2 to 30.
#include <stdio.h>
int main()
{
    int j, total;
    for (j = 2; j <= 30; j++)
    {
        if(j % 2 == 0)
        {
            total += j;
        }
    }
    printf("Sum of even integer from 2 to 30 is %d", total);
    return 0;
}
