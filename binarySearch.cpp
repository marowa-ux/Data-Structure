#include <iostream>
using namespace std;

void binarySearch(int DATA[], int LB, int UB, int ITEM, int& LOC) {
    int BEG = LB;
    int END = UB;
    int MID = (BEG + END) / 2;

    while (BEG <= END && DATA[MID] != ITEM) {
        if (ITEM < DATA[MID]) {
            END = MID - 1;
        } else {
            BEG = MID + 1;
        }
        MID = (BEG + END) / 2;
    }

    if (DATA[MID] == ITEM) {
        LOC = MID;
    } else {
        LOC = -1;
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

    cout << "Enter " << N << " elements of the sorted array: ";
    for (int i = 0; i < N; i++) {
        cin >> DATA[i];
    }

    cout << "Enter the item to be searched: ";
    cin >> ITEM;

    binarySearch(DATA, 0, N - 1, ITEM, LOC);

    if (LOC != -1) {
        cout << "Item found at location: " << LOC + 1 << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }

    return 0;
}
