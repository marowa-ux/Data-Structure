#include <iostream>
using namespace std;

void insertIntoArray(int LA[], int& N, int K, int ITEM) {
    int J = N;
    while (J >= K) {
        LA[J] = LA[J - 1];
        J--;
    }
    LA[K - 1] = ITEM;
    N++;
}

int main() {
    const int MAX_SIZE = 100;
    int LA[MAX_SIZE];
    int N;
    int K;
    int ITEM;

    cout << "Enter the number of elements in the array: ";
    cin >> N;

    cout << "Enter " << N << " elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> LA[i];
    }

    cout << "Enter the position to insert the element: ";
    cin >> K;
    cout << "Enter the item to be inserted: ";
    cin >> ITEM;

    insertIntoArray(LA, N, K, ITEM);

    cout << "Updated array after insertion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}
