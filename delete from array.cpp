#include <iostream>
using namespace std;

void deleteFromArray(int LA[], int& N, int K, int& ITEM) {
    ITEM = LA[K - 1];
    for (int J = K - 1; J < N - 1; J++) {
        LA[J] = LA[J + 1];
    }
    N--;
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

    cout << "Enter the position to delete the element: ";
    cin >> K;

    deleteFromArray(LA, N, K, ITEM);

    cout << "Deleted item: " << ITEM << endl;
    cout << "Updated array after deletion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}
