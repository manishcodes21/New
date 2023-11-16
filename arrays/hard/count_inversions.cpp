// optimal tc:O(nlogn) sc:O(n)
// int merge(vector<int>&temp, int low,int mid,int high){
//     vector<int>temp2;
//     int ct=0;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high){
//         if(temp[left]<=temp[right]){
//             temp2.push_back(temp[left]);
//             left++;
//         }
//         else{
//             temp2.push_back(temp[right]);
//             ct=ct+mid-left+1; //counting here 
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp2.push_back(temp[left]);
//             left++;
//     }
//     while(right<=high){
        
//             temp2.push_back(temp[right]);
//             right++;
//     }
//     for(int i=low;i<=high;i++){
//      temp[i]=temp2[i-low];
//     }
//     return ct;
// }
// int merge_sort(vector<int>&temp, int low,int high){
//     int ct=0;
//     if(low==high) return 0;
//     int mid=(low+high)/2;
//     ct+=merge_sort(temp,low,mid); //every merge sort function has a merge funviton so it returns some numer so that we have to add to the count
//     ct+=merge_sort(temp,mid+1,high);
//     ct+=merge(temp,low,mid,high);
//     return ct;
// }
// int numberOfInversions(vector<int>&a, int n) {
//     // Write your code here.
//     //lets soleve this implementing merge sort;
//     vector<int>temp(a);
//     int ct=merge_sort(a,0,n-1);
//     return ct;
// }