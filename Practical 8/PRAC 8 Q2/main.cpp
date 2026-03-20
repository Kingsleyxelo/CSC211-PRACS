#include <iostream>
#include <algorithm>// q2
using namespace std;

int main() {
    const int msize = 10;
    int arr[msize];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
    }


    int* maxel = max_element(arr, arr + n);
    int maxe = *maxel;

    // Output: Display the maximum element
    cout << "Maximum element in the array: " << maxe << endl;

    return 0;
}
