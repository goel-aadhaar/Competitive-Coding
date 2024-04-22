def sort(arr):
    for i in range(0,len(arr)-2):
        if arr[i]>arr[i+1]:
            arr[i]=arr[i]^arr[i+1]
            arr[i+1]=arr[i]^arr[i+1];
            arr[i]=arr[i]^arr[i+1];

for i in range(0,len(arr)-1):
    if arr[i]!=arr[i+1]: