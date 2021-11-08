#include <math.h>
#include <stdlib.h>

void counting_Sort_Radix(int *array, int size, int exponent);

void radix_Sort(int *array, int size)
{
    int max = array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }


    for(int exponent = 1; max/exponent > 0; exponent = exponent *10)
    {
        counting_Sort_Radix(array, size, exponent);
    }
}

void counting_Sort_Radix(int *array, int size, int exponent) 
{
    int keys_amount = 10;
    int *keys = (int *) calloc(keys_amount, sizeof(int));
    int *temp_array = (int *) calloc(size, sizeof(int));

    for(int i = 0; i < size; i++)
    {
        keys[(array[i]/exponent)%10]++;
    }

    for(int i = 0; i < keys_amount; i++)
    {
        keys[i + 1] += keys[i];
    }

    for(int i = 0; i < size; i++)
    {
        temp_array[keys[((array[i]/exponent) % 10) - 1]] = array[i];
        keys[((array[i]/exponent) % 10) - 1]++;
    }

    for(int i = 0; i < size; i++)
    {
        array[i] = temp_array[i];
    }

    free(temp_array);
    free(keys);
}