#include <iostream>
using namespace std;

int main() {
    int A[] = {2, 7, 9, 15, 20, 29};
    int B[] = {1, 4, 10, 30, 31};

    int m = 6, n = 5;
    int C[11];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while (i < m)
        C[k++] = A[i++];

    while (j < n)
        C[k++] = B[j++];

    cout << "Merged Array: ";
    for (int x = 0; x < m + n; x++)
        cout << C[x] << " ";

    return 0;
}