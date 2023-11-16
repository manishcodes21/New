//https://leetcode.com/problems/two-sum/description/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int x= nums.size();
       
//         map<int,int>preelem;
//      preelem[nums[0]]=0;
//         for(int i=1;i<x;i++){
//             int rem=target-nums[i];
//             if(preelem.find(rem)!=preelem.end()){
                
//                return {preelem[rem],i};
                
//             }
//             preelem[nums[i]]=i;
//         }

//             return{-1,-1};
//     }
// };


//another way
//https://www.codingninjas.com/studio/problems/reading_6845742?leftPanelTab=0
// string read(int n, vector<int> book, int target)
// {
//     // Write your code here.
//        sort(book.begin(),book.end());
//        int l=0;
//        int r=n-1;
//        int sum=0;
//        while(l<r){
//            sum=book[l]+book[r];
//            if(sum<target){
//                l++;
//            }
//            else if(sum>target){
//                r--;
//            }
//            else{
//                return "YES";
//            }
//        }
//        return "NO";
     
// }

