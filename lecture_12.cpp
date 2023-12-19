#include <iostream>
using namespace std;

// Binary Search:
int binarySearch(int arr1[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            return mid;
        }
        // Going to Right Part
        if (key > arr1[mid])
        {
            start = mid + 1;
        }
        // Going to left Part
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    // Binary Search:
    int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;

    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }

    // Creating a key:
    int key;
    cout << "Enter the key value: ";
    cin >> key;
    
    // Function call:
    int index = binarySearch(arr1, size1, key);
    cout << "The index of key is: " << index << endl;
}