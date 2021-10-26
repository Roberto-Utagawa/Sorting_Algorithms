void merge_Sort(int *array, int size);
void merge(int *array, int start, int end);
void merge_Arrays(int *array, int start1, int end1, int start2, int end2);

void merge_Sort(int *array, int size)
{
    merge(array, 0, size - 1);
}

void merge(int *array, int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int middle = (start + end)/2;
    
    merge(array, start, middle);
    merge(array, middle + 1, end);

    merge_Arrays(array, start, middle, middle + 1, end);
}

void merge_Arrays(int *array, int start1, int end1, int start2, int end2)
{
    int tempArray[end2 - start1 + 1], i = start1, j = start2, k = 0;
    
    while(i <= end1 && j <= end2)
    {
        if(array[i] > array[j])
        {
            tempArray[k] = array[j];
            j++;
            k++;
        }
        else
        {
            tempArray[k] = array[i];
            i++;
            k++;
        }
    }

    while(i <= end1)
    {
        tempArray[k] = array[i];
        k++;
        i++;
    }

    while(j <= end2)
    {
        tempArray[k] = array[j];
        k++;
        j++;
    }

    j = 0, i = start1;
    for(i; i <= end2; i++, j++)
    {
        array[i] = tempArray[j];
    }
}