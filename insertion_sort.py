# Created Insertion sort using python

def insertion_sort(arr):
    for i in range(1,len(arr)):
        min=arr[i]
        j=i-1
        while(j>=0 and min<=arr[j]):
            arr[j+1]=arr[j] 
            j=j-1
        arr[j+1]=min      
    return arr   
  
arr=[9,8,5,1,7,2,0,56,334,890,4]
print("The Sorted array is:")
print(insertion_sort(arr))
