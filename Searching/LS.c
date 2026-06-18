#include <stdio.h>
#include <conio.h>

void main()
{

    int arr[100], num, i, found = 0, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    printf("Enter %d elements in the array: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for (i = 0; i < num; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element %d is found at index %d.", key, i + 1);
    }
    else
    {
        printf("Element %d is not found in the array.", key);
    }
}