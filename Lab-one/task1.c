

#include <stdio.h>
#include <stdlib.h>

int summation(int *arr, unsigned int n);
int maximum(int *arr, unsigned int n);

/**
 * main - Entry point.
 * Return: 0 on success else returns 1.
*/
int main(void)
{
    unsigned int n, i;
    int *arr = NULL;

    printf("Enter the size of the array.\n");
    scanf("%u", &n);

    arr = (int *) malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        printf("Error allocating memory\n");
        return (1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the number[%u]:\n", i);
        scanf("%i", (arr + i));
    }

    printf("The sum of the numbers is %d\n", summation(arr, n));
    printf("The largest number is %d\n", maximum(arr, n));

    free(arr);
    return (0);
}
/**
 * summation - computes the sum of all elements in a given array.
 *
 * @arr: pointer to the array who's elements are to be summed.
 * @n: size of the array.
 *
 * Return: Sum of the elements of the array.
*/
int summation(int *arr, unsigned int n)
{
    int sum = 0;
    unsigned int i;

    for (i = 0; i < n; i++)
        sum += *(arr + i);

    return (sum);
}
/**
 * maximum - finds the largest number in an array.
 *
 * @arr: pointer to the array.
 * @n: size of the array.
 *
 * Return: Largest number in the array.
*/
int maximum(int *arr, unsigned int n)
{
    int max = *(arr);
    unsigned int i;

    for (i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }

    return (max);
}



