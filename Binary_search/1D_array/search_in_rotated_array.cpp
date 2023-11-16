// int search(vector<int>& arr, int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     int low=0;
//     int high=n-1;
//     int ans=-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==k) {
//             ans=mid;
//             break;
//         }
//         //left side is sorted
//         if(arr[low]<=arr[mid]){
                //target is on left side
//             if(arr[low]<=k && arr[mid]>=k){
//                 high=mid-1;
                
//             }
//target on right side
//             else{
//                 low=mid+1;
//             }
//         }
//         else if(arr[mid]<=arr[high]){
                //target is on right side
//              if(k>=arr[mid] && k<=arr[high]){
//                 low=mid+1;
                
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//     }
    
//     return ans;
// }
