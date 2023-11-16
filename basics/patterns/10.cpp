#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < 2 * n-1; i++)
    {
        if (i <= n - 1)
        {

            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for(int j=0;j<(2*n-1)-i;j++){
                cout<<"*";
            }
        }

        cout << endl;
    }
}