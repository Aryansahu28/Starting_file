#include <stdio.h>
int main()
//Printing Armstrong number from 1 to 2000 
{
    int r, n, sum = 0;
    for (int i = 1; i <= 2000; i++)
    {
        if ((i >= 1) && (i <= 999))
        {
            n = i;
            sum = 0;
            while (n > 0)
            {
                r = n % 10;
                sum = sum + r * r * r;
                n = n / 10;
            }
            if (i == sum)
            {
                printf("%d\n", sum);
            }
        }
        else
        {
            sum = 0;
            n = i;
            while (n > 0)
            {
                r = n % 10;
                sum = sum + r * r * r * r;
                n = n / 10;
            }
            if (i == sum)
            {
                printf(" %d \n", sum);
            }
        }
    }
}
