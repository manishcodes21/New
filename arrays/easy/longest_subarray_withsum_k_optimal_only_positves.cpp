//https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?leftPanelTab=1
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int n=a.size();
//     long long sum=0;
//     int maxlen=0;
//     int i=0;
//     for(int j=0;j<n;j++){
//         sum+=a[j];
//         if(sum<k){
//             continue;
//         }
//         else if(sum==k){
//             int len=j-i+1;
//             maxlen=max(maxlen,len);
//         }
//         else{
//             while(sum>k){
//                 sum=sum-a[i];
//                 i++;
//             }
//             if(sum==k){
//             int len=j-i+1;
//             maxlen=max(maxlen,len);
//         }

//         }
//     }
//     return maxlen;
// }
