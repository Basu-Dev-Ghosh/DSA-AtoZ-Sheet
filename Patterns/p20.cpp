#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, rows,j;
    cout << "Enter The NUmber Of Rows:\n";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        if (i <= (rows / 2) + 1)
        {
           for ( j = 1; j <= i; j++)
           {
            cout<<"*";
           }
           for ( j = 1; j <= (rows+1)-(2*i); j++)
           {
            
            cout<<" ";
           }
           for ( j = 1; j <= i; j++)
           {
           
            cout<<"*";
           }
           cout << "\n";
            
        }
        else
        {
          for ( j = 1; j <= (rows+1)-i; j++)
           {
            cout<<"*";
           }
           for ( j = 1; j <=(2*i-rows-1); j++)
           {
            cout<<" ";
           }
           for ( j = 1; j <= (rows+1)-i; j++)
           {
            cout<<"*";
           }
           cout << "\n";  
        }
        

    }
        return 0;
}