def quickSort(array):
    _quickSort(array, 0, len(array) - 1)

def _quickSort(array, start, end):
    if start >= end:
        return

    pIndex = (start + end)/2
    pivot = array[pIndex]
    i = start
    j = end

    while True:
        while array[i] < pivot:
            i += 1
        while array[j] > pivot:
            j -= 1
        if i >= j:
            break 
        array[i], array[j] = array[j], array[i]
        i += 1
        j -= 1

    _quickSort(array, start, j)
    _quickSort(array, j + 1, end)