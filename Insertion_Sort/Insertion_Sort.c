void selection_Sort(int *array, int size)
{
    int smaller_index, swap = 0, temp;

    for(int i = 0; i < size - 1; i++)
    {
        int j = i + 1;
        smaller_index = i;
        swap = 0;

        while(j < size)
        {
            if(array[j] < array[smaller_index])
            {
                smaller_index = j;
                swap = 1;
            }   
            j++;
        }
        if(swap == 1)
        {
            temp = array[smaller_index];
            array[smaller_index] = array[i];
            array[i] = temp;
        }
    }
}