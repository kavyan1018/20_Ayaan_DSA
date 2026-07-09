#include<stdio.h>

int BinarySearch(int arr[], int n, int key){ 

    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
} 


int main(){

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, index;


    printf("Enter the Number to Search in the Array :");
    scanf("%d", &key);

    index = BinarySearch(arr,n,key);

    if(index == -1){
        printf("\nElement Not Found !");
    }   
    else{
        printf("\n Element Found !");
    }
}