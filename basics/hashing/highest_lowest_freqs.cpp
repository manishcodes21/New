//https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382?leftPanelTab=1
//tv:O(n)
// #include<bits/stdc++.h>

// vector<int> getFrequencies(vector<int>& v) {
//     // Write Your Code Here
//     unordered_map<int,int>mpp;
//     vector<int>ans;
//     for(int i=0;i<v.size();i++){
//         mpp[v[i]]++;
//     }
//     int mini=INT_MAX;
//     int maxi=INT_MIN;
//     int low_elem=INT_MAX;
//     int high_elem=INT_MIN;
//     for(auto it:mpp){
//         if(it.second>=maxi){
//             if(it.second>maxi){
//                 maxi=it.second;
//                 high_elem=it.first;

//             }
//             else if(it.second==maxi && it.first<high_elem){
//                 high_elem=it.first;
//             }
//         }
//     }
//     for(auto it:mpp){
//         if(it.second<=mini){
//             if(it.second<mini){
//                 mini=it.second;
//                 low_elem=it.first;
//             }
//             else if(it.second==mini && it.first<low_elem){
//                 low_elem=it.first;
//             }
//         }
//     }
   
//     ans.push_back(high_elem);
//     ans.push_back(low_elem);
//     return ans;
// }