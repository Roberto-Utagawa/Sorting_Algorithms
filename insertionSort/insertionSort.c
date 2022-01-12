void insertion_Sort(int *array, int size)
{
    int temp;
    for(int i = 1; i < size; i++)
    {
        int j = i;
        temp = array[j];

        while(temp < array[j-1] && j > 0)
        {
            array[j] = array[j-1];
            j--;
        }
        array[j] = temp;
    }
}