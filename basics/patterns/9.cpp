#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
            int f=0;
        for(int j=0;j<(2*i)+1;j++){
            if(f==0){
                
            cout<<"*";
            f=1;
            }
            else{
                cout<<" ";
                f=0;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        int f=0;
        for(int j=0;j<(2*(n-i-1))+1;j++){
            
            if(f==0){
                
            cout<<"*";
            f=1;
            }
            else{
                cout<<" ";
                f=0;
            }
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}