#include <iostream> //q1

using namespace std;

int main()
{
    const int msize = 10;
    int arr[msize];
    int n; // Number of elements in the array
    int sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
        sum += arr[k]; // Add the current element to the sum
    }

    cout << "Sum of the array elements: " << sum << endl;

    return 0;

}
