//optimal tc:O(n) sc:O(1)
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int>list;
//         int ct1=0,ct2=0;
//         int el1=INT_MIN,el2=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(ct1==0 && nums[i]!=el2) // we must check this so that duplicates dowsnt happen which alters the count value
//             {
//                 el1=nums[i];
//                 ct1++;
//             }
//             else if(ct2==0 && nums[i]!=el1){
//                 el2=nums[i];
//                 ct2++;
//             }
//             else if(nums[i]==el1){
//                 ct1++;
//             }
//             else if(nums[i]==el2){
//                 ct2++;
//             }
//             else{
//                 ct1--;
//                 ct2--;
//             }
//         }
//         int f1=0,f2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==el1)f1++;
//             if(nums[i]==el2)f2++;

//         }
//         if(f1>nums.size()/3) list.push_back(el1);
//         if(f2>nums.size()/3) list.push_back(el2);
//         return list;
//     }
// };



// //better solution with tc:O(n) single iteration and sc:O(n)
// #include<bits/stdc++.h>
// vector<int> majorityElement(vector<int> v) {
// 	// Write your code here
// 	vector<int>list ;
// 	int mini=floor(v.size()/3 )+1;
// 	map<int,int>mpp;//stores distinct elemnt and its count
// 	for(int i=0;i<v.size();i++){
// 		mpp[v[i]]++;
// 		if(mpp[v[i]]==mini){
// 			list.push_back(v[i]);
// 		}
// 		if(list.size()==2) break; //atmost 2 elemns exist 
// 	}
// 	sort(list.begin(),list.end());
// 	return list;

// }