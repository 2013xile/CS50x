#include <stdio.h>

void selection_sort(int numbers[], int n);
void bubble_sort(int numbers[], int n);
void merge_sort(int numbers[], int n, int left, int right);

int main()
{
    int numbers[] = {5, 2, 7, 4, 1, 6, 3, 0};
    // selection_sort(numbers, 8);
    // bubble_sort(numbers, 8);
    merge_sort(numbers, 8, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", numbers[i]);
    }
}

void selection_sort(int numbers[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }
        int temp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = temp;
    }
}

void bubble_sort(int numbers[], int n)
{
    while (n - 1 > 0)
    {
        int is_swap = 0;
        for (int i = 0; i <= n - 2; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i + 1];
                numbers[i + 1] = numbers[i];
                numbers[i] = temp;
                is_swap = 1;
            }
        }
        if (is_swap == 0)
        {
            return;
        }
        n--;
    }
}

void merge_sort(int numbers[], int n, int left, int right)
{
    if (n == 1)
    {
        return;
    }
    int mid = (left + right) / 2;
    merge_sort(numbers, n / 2, left, mid);
    merge_sort(numbers, n - n / 2, mid + 1, right);
    int temp[n];
    int i = left;
    int j = mid + 1;
    int k = 0; // current index of temp array
    while (i <= mid && j <= right)
    {
        if (numbers[i] < numbers[j])
        {
            temp[k] = numbers[i];
            i++;
        } else
        {
            temp[k] = numbers[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = numbers[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        temp[k] = numbers[j];
        j++;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        numbers[left + i] = temp[i];
    }
}
