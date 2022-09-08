#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, rows;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < (rows*2)-(2*i+1); j++)
        {
            cout << '*';
        }
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}