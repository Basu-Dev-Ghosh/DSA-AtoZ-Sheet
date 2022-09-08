#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, rows;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        if(i<=(rows/2)+1){
          for (int j = 1; j <= i; j++)
          {
            cout<<"*";
          }
          
        }else{
            for (int j = 1; j <= (rows-i)+1; j++)
            {
                cout<<"*";
            }
            
        }
        cout << "\n";
    }
    return 0;
}