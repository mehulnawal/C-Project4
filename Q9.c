// // find min number

#include <stdio.h>

int main()
{
    int size, min;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\nThe min value in array is: %d", min);

    return 0;
}
