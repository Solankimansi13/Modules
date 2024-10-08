// Store 5 numbers in array and sort it in ascending order


#include<stdio.h> 
  
void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) { 
         min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
       
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
   
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[] = { 0, 23, 14, 12, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Original array: \n"); 
    printArray(arr, n); 
  
    selectionSort(arr, n); 
    printf("\nSorted array in Ascending order: \n"); 
    printArray(arr, n); 
  
    return 0; 
}