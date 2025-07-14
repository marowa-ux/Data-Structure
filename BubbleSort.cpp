#include <iostream>
using namespace std;

void bubbleSort(int DATA[], int N) {
    for (int K = 0; K < N - 1; K++) {
        int PTR = 0;
        while (PTR < N - K - 1) {
            if (DATA[PTR] > DATA[PTR + 1]) {
                int temp = DATA[PTR];
                DATA[PTR] = DATA[PTR + 1];
                DATA[PTR + 1] = temp;
            }
            PTR++;
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    int DATA[MAX_SIZE];
    int N;

    cout << "Enter the number of elements in the array: ";
    cin >> N;

    cout << "Enter " << N << " elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> DATA[i];
    }

    bubbleSort(DATA, N);

    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}
