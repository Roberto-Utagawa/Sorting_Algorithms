def takeGap(size):
    i = 1
    while (2**i)-1 <= size:
        i += 1
    i -= 1
    return i

def shellSort(array):
    gap = takeGap(len(array))
    while gap > 0:
        insertionSort(array, gap)
        gap = int(gap/2)

def insertionSort(array, gap):
    for i in range(gap, len(array)):
        j  = i - gap
        temp = array[i]
        while j >= 0 and array[j] > temp:
            array[j + gap] = array[j]
            j -= gap
        array[j + gap] = temp