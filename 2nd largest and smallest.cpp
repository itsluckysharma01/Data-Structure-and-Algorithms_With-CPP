#include<iostream>
using namespace std;
int main ()
{
    int A[10], n, i, j, x;
    cout << " Enter The Size Of Array :-  ";
    cin >> n;
    cout << " \n Enter Elements Of Array :-  \n";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << " Second Largest Number : " << A[1];
    cout << "\n Second Smallest Number : " << A[n - 2];
    return 0;
}
