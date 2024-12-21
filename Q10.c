// Count the number of even and odd elements in a 1D array.

#include <stdio.h>

int main()
{
    int size, evenCount = 0, oddCount = 0;

    printf("Enter your array size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);

        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("\nThe even number of values in array are: %d", evenCount);
    printf("\nThe odd number of values in array are: %d", oddCount);

    return 0;
}
