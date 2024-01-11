#include <cs50.h>
#include <stdio.h>

bool linear_search(int n, int numbers[], int size);

bool binary_search(int n, int numbers[], int size);

int main(void)
{
    // An array of integers
    int numbers[] = {1, 3, 10, 20, 28, 70};

    // Search for number
    int n = get_int("Number: ");
    if (linear_search(n, numbers, 7))
    {
        printf("Found\n");
        return 0;
    } else
    {
        printf("Not found\n");
        return 1;
    }
}

bool linear_search(int n, int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == n)
        {
            return true;
        }
    }
    return false;
}

bool binary_search(int n, int numbers[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (numbers[mid] == n)
        {
            return true;
        } else if (numbers[mid] < n)
        {
            left = mid + 1;
        } else
        {
            right = mid - 1;
        }
    }
    return false;
}
