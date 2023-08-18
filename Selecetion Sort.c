#include <stdio.h>
#include <stdlib.h>

void selectionSort(int [], int);

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

    selectionSort(arr, n);
    printf("\n\n Sort array:\n");
    for(int i=0; i<n; i++){
        printf(" %-3d", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int ind = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[ind]){
                ind = j;
            }
        }
        int tmp;

        tmp = arr[ind];
        arr[ind] = arr[i];
        arr[i] = tmp;
    }
}
