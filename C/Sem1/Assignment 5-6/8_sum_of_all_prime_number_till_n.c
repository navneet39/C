#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}
