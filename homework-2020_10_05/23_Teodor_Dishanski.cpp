#include <iostream>
using namespace std;

const int N = 50;

void print(int A[][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

bool equal(int A[][N], int m1, int n1, int B[][N], int m2, int n2) {
    if (m1 != m2 || n1 != n2) {
        return false;
    }
    
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    
    return true;
}

void sum(int A[][N], int B[][N], int C[][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void transpose(int A[][N], int B[][N], int m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[j][i];
        }
    }
}

void sMult(int A[][N], int R[][N], int m, int n, int s) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            R[i][j] = s * A[i][j];
        }
    }
}

void sub(int A[][N], int B[][N], int C[][N], int m, int n) {
    sMult(B, C, m, n, -1);
    sum(A, C, C, m, n);
}

int main() {
    
    int A[3][N] = {{1, 2, 3}, 
                   {4, 5, 6}, 
                   {7, 8, 9}};
    int B[3][N] = {{1, 1, 1},
                   {2, 2, 2},
                   {3, 3, 3}};
    int C[3][N] = {{0}};
    
    sub(A, B, C, 3, 3);
    print(C, 3, 3);
    
    return 0;
}