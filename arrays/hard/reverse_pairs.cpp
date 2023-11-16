//tc:O(2nlogn) sc:O(nlogn)
// void merge(vector<int>&temp, int low,int mid,int high){
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
    
// }
// int count(vector<int>&temp, int low,int mid,int high){
//     int right=mid+1;
//     int ct=0;
//     for(int i=low;i<=mid;i++){
//         while(right<=high && temp[i]>2LL*temp[right]){    //2LL is used to so that 2 is long long integer 
//             right++;
//         }
//         ct=ct+(right-(mid+1));
//     }
//     return ct;
// }
// int merge_sort(vector<int>&temp, int low,int high){
//     int ct=0;
//     if(low==high) return 0;
//     int mid=(low+high)/2;
//     ct+=merge_sort(temp,low,mid); //every merge sort function has a count funviton so it returns some numer so that we have to add to the count
//     ct+=merge_sort(temp,mid+1,high);
//     ct+=count(temp,low,mid,high);
//     merge(temp,low,mid,high);
//     return ct;
// }
// int team(vector <int> & skill, int n)
// {
//     // Write your code here.
//      vector<int>temp(skill);
//     int ct=merge_sort(temp,0,n-1);
//     return ct;
// }
