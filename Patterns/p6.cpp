#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, rows, count = 1;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows-i; j++)
        {
            cout << count;
        count++;
        }
        cout << "\n";
        count=1;
    }

    return 0;
}