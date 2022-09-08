#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows, col, num, temp, temp2;
    cout << "Enter The Number of Rows:\n";
    cin >> rows;
    num = (rows / 2) + 1;
    temp = num;
    temp2 = num;
    col = (num * 2) - 1;
    for (int i = 1; i <= rows; i++)
    {
        if (i <= (rows / 2))
        {
            for (int j = 1; j <= i; j++)
            {
                cout << num;
                temp2 = num;
                num = num - 1;
            }
            num = temp;
            for (int j = 1; j <= col - (2 * i); j++)
            {
                cout << temp2;
            }
            for (int j = 1; j <= i; j++)
            {
                cout << temp2;
                temp2 = temp2 + 1;
            }
            num = temp;
            cout << '\n';
        }
        else if (i == (rows / 2) + 1)
        {
            for (int j = num; j >= 1; j--)
            {
                cout << j;
            }
            for (int j = 2; j <= num; j++)
            {
                cout << j;
            }

            cout << '\n';
        }
        else
        {
            for (int j = 1; j <= rows-i; j++)
            {
                cout << num;
                temp2 = num;
                num = num - 1;
                
            }
            num = temp;
            for (int j = 1; j <= (col-(2*(rows-i))); j++)
            {
                cout << temp2-1;
            }
            for (int j = 1; j <= rows-i; j++)
            {
               cout << temp2;
                temp2 = temp2 + 1;  
            }
            num = temp;
            cout << '\n';
        }
    }

    return 0;
}