#include <stdio.h>
 
int binarySearch(int arr[], int l, int r, int x)
{

    /* the loop will run till there are elements in the 
    subarray as l > r means that
    there are no elements to consider*/

    while (l <= r) {
        // calculating mid point
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x) {
          return m;
        }

        // If x greater than ,, ignore left half
        if (arr[m] < x) {
            l = m + 1;
        }

        // If x is smaller than m, ignore right half
        else {
            r = m - 1;
        }
    }

    // if we reach here, then element was not present
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int x = 24;
    int result = binarySearch(arr, 0, size - 1, x);

    if (result == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at index %d", result);
    }
    return 0;
}
