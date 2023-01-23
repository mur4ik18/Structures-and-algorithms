def insert_sorting(arr: list[int]= []):
    j = 1
    for j in range(j, len(arr)):
        key = arr[j]
        i = j-1
        while i >= 0 and arr[i] >= key:
            arr[i+1] = arr[i]
            i = i - 1
        arr[i+1] = key
    return arr
