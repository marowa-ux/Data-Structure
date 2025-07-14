#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    if (arr.size() == result.size()) {
        cout << "Array already unique!" << endl;
    } else {
        arr = result;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    removeDuplicates(arr);

    cout << "Changed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
