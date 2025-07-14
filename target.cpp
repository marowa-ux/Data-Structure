#include <iostream>
using namespace std;

int main() {
    int A[20];
    int target, count = 0;

    cout << "Enter 20 integers for array A:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> A[i];
    }

    cout << "Enter the integer to search for: ";
    cin >> target;

    for (int i = 0; i < 20; i++) {
        if (A[i] == target) {
            count++;
        }
    }

    cout << target << " occurs " << count << " times in array A." << endl;

    return 0;
}
