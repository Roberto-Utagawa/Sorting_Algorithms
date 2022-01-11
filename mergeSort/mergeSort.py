def mergeSort(array):
    if len(array) <= 1:
        return

    middle = int(len(array)/2)
    leftArray = array[ :middle]
    rightArray = array[middle: ]
    mergeSort(leftArray)
    mergeSort(rightArray)

    merge(array, leftArray, rightArray)

def merge(array, lArray, rArray):
    i = j = k = 0
    while i < len(lArray) and j < len(rArray):
        if lArray[i] > rArray[j]:
            array[k] = rArray[j]
            j += 1
        else:
            array[k] = lArray[i]
            i += 1
        k += 1

    while i < len(lArray):
        array[k] = lArray[i]
        i += 1
        k += 1

    while j < len(rArray):
        array[k] = rArray[j]
        j += 1
        k += 1