//https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?leftPanelTab=1
// #include <bits/stdc++.h> 
// int getLongestSubarray(vector<int>& nums, int k){
//     // Write your code here
//     map<int,int>presummap;
//     int sum=0;
//     int n=nums.size();
//     int maxlen=0;
//     for(int i=0;i<n;i++){
//         sum+=nums[i];
//         if(sum==k){
//             maxlen=max(maxlen,i+1);
//         }
        
//             int rem=sum-k;
//             if(presummap.find(rem)!=presummap.end()){
//                 int len=i-presummap[rem];
//                 maxlen=max(len,maxlen);
//             }
//             if(presummap.find(sum)==presummap.end()){
//                 presummap[sum]=i;
//             }
        
//     }
//     return maxlen;
// }