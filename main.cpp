#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;
    int* A = new int[M];
    int* B = new int[N];
    cout << "Enter " << M << " integers for array A:" << endl;
    for (int i = 0; i < M; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "Enter " << N << " integers for array B:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> B[i];
    }
    int* C = new int[M + N];
    int index = 0;
    for (int i = 0; i < M; ++i) {
        C[index++] = A[i];
    }
    for (int i = 0; i < N; ++i) {
        C[index++] = B[i];
    }
    cout << "Array A: ";
    for (int i = 0; i < M; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Array B: ";
    for (int i = 0; i < N; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "Merged array C: ";
    for (int i = 0; i < M + N; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
