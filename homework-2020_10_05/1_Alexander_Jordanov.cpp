#include <iostream>
#include <functional>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const int N = 50;

void print(int A[][N], int m , int n)
{
    for(int i = 0 ; i < m ; ++i)
    {
        for(int j = 0 ; j < n; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void sub( int A[][50], int B[][50], int C[][50], int m, int n)
{
	for(int i = 0 ; i < m ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      C[i][j] = A[i][j] - B[i][j];
    }
  }
  print(C, 2, 3);
}

int main()
{
	int A[][N] = {{1,2,3}, {4,5,6}};

	int B[][N] = {{90,22,31}, {51,42,23}};

	int C[][N] = {};

	cout << "Matrices : " << endl;
	print(A, 2, 3);
	print(B, 2, 3);
  cout << "Result : " << endl;
  sub(A, B, C, 2, 3);
	return 0;
}
