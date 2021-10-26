#include <stdio.h>

int* bubble_Sort(int *array, int size)
{
    int i = 1, swap = 1, temp;

    while (swap == 1 && i < size-1)
    {
        swap = 0;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                swap = 1;
            }
        }
        i++;
    }
    return array;
}
