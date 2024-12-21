// find max number

#include <stdio.h>

int main()
{
    int size, max;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    max = arr[0];

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);

        if (arr[i] > arr[0])
        {
            max = arr[i];
        }
    }

    printf("\nThe max element in array is: %d", max);

    return 0;
}