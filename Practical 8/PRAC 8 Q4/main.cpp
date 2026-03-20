#include <iostream>
#include <string>
#include <vector>
using namespace std;
int countStringsGreaterThan5(const vector < string >& arr) {
    int count = 0;
    for (const string& str : arr) {
        if (str.length() > 5) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "grapefruit", "kiwi", "strawberry"};

    int count = countStringsGreaterThan5(strings);

    cout << "Number of strings with length greater than 5: " << count << endl;

    return 0;
}
