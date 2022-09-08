#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, rows, count = 0;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count++;
            cout << count;
        }
        for (int j = 1; j <= (rows * 2) - (count * 2); j++)
        {
            cout << " ";
        }
        for (int j = count; j >= 1; j--)
        {
            cout << count;
            count--;
        }
        cout << "\n";
        count=0;
    }
    return 0;
}