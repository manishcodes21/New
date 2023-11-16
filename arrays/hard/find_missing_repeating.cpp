//optimal 2 xor method
// tc:O(n) sc:O(1)
// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     // Write your code here
//     long long n=a.size();
//     int xr=0;
//     for(int i=0;i<n;i++){
//         xr=xr^a[i];
//         xr=xr^(i+1);
//     }
//     //finding the diff bit number
//     int bitno=0;
//     while(1){
//         if((xr & (1<<bitno))!=0) break; // AND gives 1 only if xr bit is 1 
//         else{
//             bitno++;
//         }
//     }
//     //zero bit at bitno
//     int zero=0;
//     //onw bit at bitno
//     int one=0;
//     for(int i=0;i<n;i++){
//         if((a[i] & (1<<bitno))!=0){
//             one=one^a[i];
//         }
//         else{
//             zero=zero^a[i];
//         }
//         if(((i+1) & (1<<bitno))!=0){
//             one=one^(i+1);
//         }
//         else{
//             zero=zero^(i+1);
//         }
//     }
//     int ct=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==zero) ct++;
//     }
//     if(ct==2) return{zero,one};
//      return{one,zero};
// }

//better tc:O(2n) sc:O(n)
// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     // Write your code here
//     vector<int>ans;
//     int n=a.size();
//     int hasharr[n+1]={0};
//     for(int i=0;i<n;i++){
//         hasharr[a[i]]++;
//     }
//     int miss,repeat;
//     for(int i=0;i<n+1;i++){
//         if(hasharr[i]==2) repeat=i;
//         if(hasharr[i]==0) miss=i;
//     }
//     ans.push_back(repeat);
//     ans.push_back(miss);
//     return ans;
// }