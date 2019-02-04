//Write a program that reads five numbers (each be- tween 1 and 30).
//For each number read, your program should print a line containing that number of adjacent asterisks.
#include <stdio.h>
int main(void)
{
    int i, j, number;
    printf("Enter 5 numbers between 1 and 30: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number);
        for (j = 0; j < number; j++)
        {
            printf("*");
        }
        printf("\n");
        }
    return 0;
}
