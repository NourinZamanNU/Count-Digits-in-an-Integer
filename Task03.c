#include <stdio.h>

int main()
{
    int N, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &N);

    while(N != 0)
    {
        N = N / 10;
        count++;
    }

    printf("Total number of digits = %d\n", count);

    return 0;
}