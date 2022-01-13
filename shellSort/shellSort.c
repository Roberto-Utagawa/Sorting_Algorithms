#include <math.h>

int take_Gap(int size);

void shell_Sort(int *array, int size)
{
    int gap = take_Gap(size);
    int temp;

    for(gap; gap > 0; gap = gap/2)
    {
        for(int i = gap; i < size; i++)
        {
            int temp = array[i];
            int j = i - gap;
            while(j >= 0 && array[j] > temp)
            {
                array[j+gap] = array[j];
                j = j - gap;
            }
            array[j + gap] = temp;
        }
    }
}

int take_Gap(int size)
{
    int i = 1;
    while((pow(2, i)-1) <= size)
    {
        i++;
    }
    i--;

    return i;
}