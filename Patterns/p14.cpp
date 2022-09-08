#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, rows, alpha = 65;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)alpha;
            alpha++;
        }
        alpha = 65;
        cout << "\n";
    }
    return 0;
}