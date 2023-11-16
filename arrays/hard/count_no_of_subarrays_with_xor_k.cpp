// tc:O(n*log n)
//sc:O(n) in worst case
// #include<bits/stdc++.h>
// int subarraysWithSumK(vector < int > a, int b) {
//     // Write your code here
//     int xr=0;
//     map<int,int>mpp;
//     mpp[0]=1; //if total subarray gives xor ==b
//     int ct=0;
//     for(int i=0;i<a.size();i++){
//         xr=xr^a[i];
//         int x=xr^b;
//         if(mpp.find(x)!=mpp.end()){
//             ct=ct+mpp[x];
//         }
//         mpp[xr]++;
//     }
//     return ct;
// }