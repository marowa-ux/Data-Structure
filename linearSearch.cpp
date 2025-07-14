#include <iostream>
using namespace std;

void linearSearch(int DATA[], int N, int ITEM, int& LOC) {
    DATA[N] = ITEM;

    LOC = 0;

    while (DATA[LOC] != ITEM) {
        LOC++;
    }

    if (LOC == N) {
        LOC = 0;
    }
}

int main() {
    const int MAX_SIZE = 100;
    int DATA[MAX_SIZE];
    int N;
    int ITEM;
    int LOC;

    cout << "Enter the number of elements in the array: ";
    cin >> N;

    cout << "Enter " << N << " elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> DATA[i];
    }

    cout << "Enter the item to be searched: ";
    cin >> ITEM;

    linearSearch(DATA, N, ITEM, LOC);

    if (LOC != 0) {
        cout << "Item found at location: " << LOC + 1 << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }

    return 0;
}
