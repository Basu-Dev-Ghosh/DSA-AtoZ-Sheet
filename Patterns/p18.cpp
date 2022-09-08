#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j, rows, alpha;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        alpha=70-i;
        for ( j = 1; j <= i; j++)
        {
            cout << (char)alpha<<" ";
            alpha++;
            
        }
        cout << "\n";
    }
    return 0;
}