//Modify the program of Fig. 4.6 so that it uses only integers to calculate the compound interest.
#include <stdio.h>
double myPow(int base, int exp);
int main()
{
    int principle;
    int amount;
    int rate;
    int year;
    int dollars;
    int cents;
    
    principle = 1000; // P = $1000.00 ==> P = principle
    rate = 5;    // r = 0.05 or 5% = rate/100
    for(year = 1; year <= 10; year++)
    {
        // gives 1000*A(t)
        amount = myPow(10, 3 - 2*year)* principle * myPow(100 + rate, year);
        if(5 <= (amount % 10))
        {
            amount += 10;
        }
        // gives 100*A(t)
        amount /= 10;
        
        // gives the dollar portion
        dollars = amount / 100;
        // gives the fraction of a dollar
        cents = amount % 100;
        
        // if the decimal is not a two digit figure, concatenate with a zero
        if (cents < 10)
            printf("%4d%18d.0%d\n", year, dollars, cents);
        else
            printf("%4d%18d.%d\n", year, dollars, cents);
    }
    return 0;
}
double myPow(int base, int exp)
{
    double result = 1.0;
    while(0 < exp)
    {
        result *= (double)base;
        exp--;
    }
    while(0 > exp)
    {
        result /= (double)base;
        exp++;
    }
    return result;
}