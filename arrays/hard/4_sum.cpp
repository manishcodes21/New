//tc:O(n^3+n*log(n))
// #include<bits/stdc++.h>
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     vector<vector<int>>ans;
      
//     int k=-1,l=n-1;
        
//     for(int i=0;i<n-2;i++){
//             if(i>0 && nums[i]==nums[i-1])continue;
//            for(int j=i+1;j<n;j++){
//                if(j!=i+1 && nums[j]==nums[j-1]) continue; // j==i+1 is considered since its is first element

//            k=j+1;
//            l=n-1;
//            while(k<l){

//         long long sum=nums[i]+nums[j];
//            sum+=nums[k];
//            sum+=nums[l];
//            if(sum<target)k++;
//            else if( sum>target)l--;
//            else{
//                vector<int>temp{nums[i],nums[j],nums[k],nums[l]};
//               ans.push_back(temp);
               
//                k++;
//                l--;
//                while(k<=l && nums[k]==nums[k-1])k++;
//                while(k<=l && nums[l]==nums[l+1])l--;
//            }
//            }
//            }
//         }



//         return ans;
//     }
// };


// better tc:O(n^3 *log(m));
// #include<bits/stdc++.h>
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     // Write your code here
//     set<vector<int>>st;
//     int n=nums.size();
//     unordered_map<int,int>mpp;
//     for(int i=0;i<=n-3;i++){
//         for(int j=i+1;j<=n-2;j++){
//             mpp.clear();
//             for(int k=j+1;k<=n-1;k++){
//                 int sum=nums[i]+nums[j]+nums[k];
//                 int rem=target-(sum);
//                 if(mpp.find(rem)!=mpp.end()){
//                     vector<int>temp{nums[i],nums[j],nums[k],rem};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 mpp[nums[k]]=k;
//             }

//         }
//     }
//     vector<vector<int>>ans(st.begin(),st.end());
//     return ans;
// }