#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    unordered_map<int, int> countMap;

    for (int i = 0; i < 20; i++) {
        countMap[arr[i]]++;
    }

    for (const auto& pair : countMap) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times\n";
    }

    return 0;
}
