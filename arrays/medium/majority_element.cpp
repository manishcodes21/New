//https://leetcode.com/problems/majority-element/description/
//Moores voting algorithm
// tc:O(n) , sc:O(1)
// int majorityElement(vector<int> v) {
// 	// Write your code here
// 	//moore's voting algorithm
// 	int ct=0;int el;
// 	for(int i=0;i<v.size();i++){
// 		if(ct==0){
// 			el=v[i];
// 			ct++;
// 		}
// 		else{
// 			if(v[i]==el){
// 				ct++;
// 			}
// 			else{
// 				ct--;
// 			}
// 		}
		
// 	}
// 	//since it is guarenteed that majority element exists
// 	return el;
// }




//using hash map 
//tc:O(2n) sc:O(max_element)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         int x=floor(n/2);
//         auto maxi=max_element(nums.begin(),nums.end());
//         map<int,int>mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
//         for(int i=0;i<n;i++){
//             if(mpp[nums[i]]>x){
//                 return nums[i];
//             }
//         }
//     return -1;
//     }
// };