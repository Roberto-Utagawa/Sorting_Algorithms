void quick(int *array, int first, int last);

void quick_Sort(int *array, int size)
{
    quick(array, 0, size - 1);
}

void quick(int *array, int first, int last)
{
    if(first >= last)
    {
        return;
    }

    int middle = (first + last) / 2;
    int pivot = array[middle];
    int i = first;
    int j = last;
    int temp;

    while(1)
    {
        while(array[i] < pivot)
        {
            i++;
        }

        while(array[j] > pivot)
        {
            j--;
        }

        if(i >= j)
        {
            break;
        }

        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }

    quick(array, first, j);
    quick(array, j + 1, last);
}