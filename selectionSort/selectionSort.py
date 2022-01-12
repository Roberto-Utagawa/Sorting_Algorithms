def selection_sort(array):
    for i in range(0, len(array)-1):
        temp = i

        for j in range(i+1, len(array)):
            if array[j] < array[temp]:
                temp = j

        array[temp], array[i] = array[i], array[temp]