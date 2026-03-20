#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[] = {3, 7, 1, 9};
    int arr2[] = {5, 2, 8, 4};
    int mergedArr[8]; // Size of merged array = size of arr1 + size of arr2

    // Copy elements of arr1 and arr2 into mergedArr
    copy(arr1, arr1 + 4, mergedArr);
    copy(arr2, arr2 + 4, mergedArr + 4);

    // Sort merged array
    sort(mergedArr, mergedArr + 8);

    // Print sorted merged array
    cout << "Sorted Merged Array: ";
    for (int i = 0; i < 8; ++i) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
