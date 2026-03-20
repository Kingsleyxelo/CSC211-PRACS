#include <iostream>
#include <iomanip> // For setprecision
#include <vector>
using namespace std;
// Function to calculate the average of elements in an array
double calculateAverage(const vector<double>& arr) {
    double sum = 0.0;
    for (double num : arr) {
        sum += num;
    }
    return sum / arr.size();
}

int main() {
    vector<double> numbers = {3.5, 7.8, 1.2, 9.4, 5.6};

    // Calculate average
    double average = calculateAverage(numbers);

    // Print result with precision up to two decimal places
    cout << "Average value: " << fixed << setprecision(2) << average <<endl;

    return 0;
}

