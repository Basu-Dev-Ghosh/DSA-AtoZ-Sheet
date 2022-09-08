#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,rows;
    cout<<"Enter The NUmber Of Rows:\n";
    cin>>rows;
    for ( i = 0; i < rows; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}