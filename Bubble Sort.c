#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int [], int);

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

    bubbleSort(arr, n);
    printf("\n\n Sorted array:\n");
    for(int i=0; i<n; i++){
        printf(" %-3d", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int n){
    int gec;

    for(int i=0; i<n-1; i++){
        for(int k=0; k<n-i-1; k++){
            if(arr[k] > arr[k+1]){
                gec = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = gec;
            }
        }
    }

}
