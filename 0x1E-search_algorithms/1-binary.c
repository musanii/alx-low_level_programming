#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present or
 *         if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = (int)size - 1, mid;

    if (!array)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");

        mid = (left + right) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
