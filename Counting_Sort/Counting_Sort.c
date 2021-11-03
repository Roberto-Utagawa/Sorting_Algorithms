int take_Keys_Amount(int *array, int size);

void counting_Sort(int *array, int size) 
{
    int keys_amount = take_Keys_Amount(array, size);
    int *keys = (int *) calloc(keys_amount, sizeof(int));
    int *temp_array = (int *) calloc(size, sizeof(int));

    for(int i = 0; i < size; i++)
    {
        keys[array[i]]++;
    }

    for(int i = 0; i < keys_amount; i++)
    {
        keys[i + 1] += keys[i];
    }

    for(int i = 0; i < size; i++)
    {
        temp_array[keys[array[i] - 1]] = array[i];
        keys[array[i] - 1]++;
    }

    for(int i = 0; i < size; i++)
    {
        array[i] = temp_array[i];
    }
}

//Number of possible elements in the array//
int take_Keys_Amount(int *array, int size)
{
    int keys_amount = array[0];
    for(int i = 1; i < size; i ++)
    {
        if(keys_amount < array[i])
        {
            keys_amount = array[i];
        }
    }
    keys_amount++;

    return keys_amount;
}
