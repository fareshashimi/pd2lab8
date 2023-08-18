#include <stdio.h>
#include <stdlib.h>

void insertionSort(int [], int);

int main(){
    int n;
    printf("Insert a size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nInsert %d elements in the array:\n", n);
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }


    printf("\n\n Original array:\n");
    for(int i=0; i<n; i++){
        printf(" %-3d", arr[i]);
    }

    insertionSort(arr, n);
    printf("\n\n Sorted array:\n");
    for(int i=0; i<n; i++){
       printf(" %-3d", arr[i]);
    }

    return 0;
}


void insertionSort(int arr[], int n){
    int add, i, k;

    for(i=1; i<n; i++){
        add = arr[i];
        for(k=i-1; (k>=0) && (add<=arr[k]); k--){
            arr[k+1] = arr[k];
        }
        arr[k+1] = add;
    }
}
