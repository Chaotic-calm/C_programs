#include <stdio.h>
 
// A recursive binary search function. It returns location
// of x in given array arr[l..r] if present, otherwise -1

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        // calculating mid point
        int mid = l + (r - l) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only
        // be present in left subarray

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int x = 10;
    int index = binarySearch(arr, 0, size - 1, x);
 
    if (index == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at index %d", index);
    }
    return 0;
}
