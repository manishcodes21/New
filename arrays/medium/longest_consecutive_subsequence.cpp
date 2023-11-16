//https://leetcode.com/problems/longest-consecutive-sequence/description/
//optimal tc:O(3n) sc:O(n)
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int>st;
//         if(nums.size()==0) return 0;
//         int longest=1;
//         for(int i=0;i<nums.size();i++){
//             st.insert (nums[i]);
//         }
//         for(auto it=st.begin();it!=st.end();it++){     
//             int cur=*it;
//             if(st.find(cur-1)==st.end()){
//                 int ct=1;
//                  int x=*it;
//                  while(st.find(x+1)!=st.end()){
//                      ct++;
//                      x=x+1;
//                  }
//                  longest=max(longest,ct);
//             }
           
//         }
//         return longest;
//     }
// };
//Better solution tc:O(nlogn) sc:O(n)
// int longestSuccessiveElements(vector<int>&a) {
//     // Write your code here.
//     //since we can reorder the array lets use better way that is sorting
//     sort(a.begin(),a.end());
//     int longest=1;
//     int ct=0;
//     int last_samller=INT_MIN;
//     for(int i=0;i<a.size();i++){
//         if(a[i]-1==last_samller){
//             ct++;
//             last_samller=a[i];
//         }
//         else if(a[i]==last_samller) continue;
//         else{
//             ct=1;
//             last_samller=a[i];
//         }
//         longest=max(longest,ct);
//     }
//     return longest;
// }