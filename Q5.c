// Sum of elements greater than a previous element

#include <stdio.h>
int main()
{
    int arr[] = {10, 30, 20, 50, 40};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            sum += arr[i];
        }
    }
    printf("Sum of elements greater than previous number is :%d", sum);

    return 0;
}