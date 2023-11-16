//optimal tc: O(nlogn+ n*n)
//https://leetcode.com/problems/3sum/description/
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int j=-1,k=-1;
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//            j=i+1;
//            k=n-1;
//            while(j<k){

//            int sum=nums[i]+nums[j]+nums[k];
//            if(sum<0){
//                 j++;
//            }
//            else if(sum>0){
//                 k--;
//            }
//            else {
//                vector<int>temp{nums[i],nums[j],nums[k]};
//                ans.push_back(temp);
//                 j++;
//                 k--;
//                 while(j<k && nums[j]==nums[j-1]) j++;
//                 while(j<k && nums[k]==nums[k+1]) k--;
//             }
//            }
//         }
//         return ans;
//     }
// };


// better tc: O(n^2+n^2 * log(n))
// codingninjas.com/studio/problems/three-sum_6922132?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
// #include<bits/stdc++.h>

// using namespace std;

// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     // Write your code here.
//     map<int, int> mpp;
//     set<vector<int>> st;
//     int sum = 0;
//     for (int i = 0; i < n - 1; i++) {
//         mpp.clear();
//         for (int j = i + 1; j < n; j++) {
//             sum = arr[i] + arr[j];
//             int req = (-1) * sum;
//             if (mpp.find(req) != mpp.end()) {
//                 vector<int> temp;
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 temp.push_back(req);
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             mpp[arr[j]] = j;
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }
