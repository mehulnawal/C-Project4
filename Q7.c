#include <stdio.h>

int main()
{
    int array[10], sum = 0, choice, n = 0;

    while (1)
    {
        printf("Menu:\n");
        printf("1. CREATE\n2. READ\n3. EXIT\n");
        printf("Choose a number from (1-3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Create
            if (n < 10)
            {
                printf("Enter number to create array: ");
                scanf("%d", &array[n]);
                n++;
            }
            else
            {
                printf("Array is full!\n");
            }
            break;

        case 2:
            // Read
            sum = 0; // Reset sum for each read operation
            printf("Elements of array: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", array[i]);
                sum += array[i];
            }
            printf("\nSum is: %d\n", sum);
            break;

        case 3:
            // Exit
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
