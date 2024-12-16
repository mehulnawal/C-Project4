#include <stdio.h>

int main()
{
    int arr[5], sum;
    float avg; // init

    // create
    for (int i = 0; i <= 4; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // avg
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
        avg = (float)sum / 5;
    }
    printf("avg: %.2f", avg);

    return 0;
}