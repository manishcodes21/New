//https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
//tc:O(nlogn+n) sc:O(n)
// vector<int> superiorElements(vector<int>&a) {
//     // Write your code here.
//     vector<int>ans;
//     ans.push_back(a[a.size()-1]);
   
//     int maxi=a[a.size()-1];
//     for(int i=a.size()-2;i>=0;i--){
//         if(a[i]>maxi){
//             ans.push_back(a[i]);
//             maxi=max(maxi,a[i]);
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }