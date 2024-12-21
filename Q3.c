#include <stdio.h>

int main()
{
    int size;

    printf("Enter your array size: ");
    scanf("%d", &size);

    int arrA[size], arrB[size], arrC[size];

    // taking input in array A
    for (int i = 0; i < size; i++)
    {
        printf("arrA[%d]: ", i);
        scanf("%d", &arrA[i]);
    }

    // taking input in array B
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("arrB[%d]: ", i);
        scanf("%d", &arrB[i]);
    }

    printf("\n\nArray C: ");
    for (int i = 0; i < size; i++)
    {
        arrC[i] = arrA[i] + arrB[i];

        printf("arrC[%d]: %d\n", i, arrC[i]);
    }

    return 0;
}