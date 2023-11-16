#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (f == 0)
        {

                int f1 = 0;
            for (int j = 0; j < i + 1; j++)
            {

                if (f1 == 0)
                {
                    cout<<1<<" ";
                    f1=1;
                }
                else{
                    cout<<0<<" ";
                    f1=0;
                }

            }
            f=1;
        }
        else{
                int f1 = 0;
            for (int j = 0; j < i + 1; j++)
            {

                if (f1 == 0)
                {
                    cout<<0<<" ";
                    f1=1;
                }
                else{
                    cout<<1<<" ";
                    f1=0;
                }
            }
            f=0;
        }
                    cout << endl;
    }
}