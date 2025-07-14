#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array1, array2;
    int size1, size2, num;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter elements for the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> num;
        array1.push_back(num);
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> num;
        array2.push_back(num);
    }

    vector<int> mergedArray;
    mergedArray.insert(mergedArray.end(), array1.begin(), array1.end());
    mergedArray.insert(mergedArray.end(), array2.begin(), array2.end());

    cout << "Merged array in reverse order: ";
    for (int i = mergedArray.size() - 1; i >= 0; --i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    return 0;
}
