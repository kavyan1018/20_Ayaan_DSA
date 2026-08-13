// Insertion Sort 

#include <stdio.h>

void main(){


    int arr[100], n;
    int i, j, key;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    // insertion sort algorithm


    for(i = 1; i < n; i++){

        key = arr[i];
        j = i - 1;     // 0 index of the array


        while(j >= 0 && arr[j] > key){

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}