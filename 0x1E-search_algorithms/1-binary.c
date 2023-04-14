#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not found or array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return (-1);
