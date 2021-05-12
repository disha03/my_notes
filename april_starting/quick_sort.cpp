// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
//User function Template for C

//Function to sort an array using quick sort algorithm.
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void quickSort(int arr[], int low, int high)
{
    // code here
    if(low>=high)
    {
        return;
    }
    int pi=partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}
    
int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot=high;
   int i=low-1;
   for(int j=low;j<=high-1;j++)
   {
       if(arr[j]<arr[pivot])
       {
           i++;
           swap(&arr[i],&arr[j]);
       }
   }
   swap(&arr[i+1],&arr[high]);
   return (i+1);
}

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends