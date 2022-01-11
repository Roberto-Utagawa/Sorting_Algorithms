def bubble_sort(array):
    swap = 1
    i = 0
    while swap == 1 and i < (len(array)-1):
        swap = 0
        for j in range(i, len(array)-1):
            if array[j] > array[j+1]:
                swap = 1
                array[j], array[j+1] = array[j+1], array[j]
