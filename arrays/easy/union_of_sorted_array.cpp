//https://www.codingninjas.com/studio/problems/sorted-array_6613259
// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     // Write your code here
//     int n1=a.size();
//     int n2=b.size();
//     int i=0,j=0;
//     vector<int>answer;
//     while(i<n1 && j<n2){
//         if(a[i]<=b[j]){
//             if(answer.size()==0 || answer.back()!=a[i]){

//             answer.push_back(a[i]);
//             }
//             i++;
//         }
//         else{
//              if(answer.size()==0 || answer.back()!=b[j]){
//             answer.push_back(b[j]);
//              }
//             j++;
//         }
//     }
//     while(j<n2){
//         if(answer.size()==0 || answer.back()!=b[j]){
//             answer.push_back(b[j]);
//              }
//             j++;
//     }
//     while(i<n1){
//         if(answer.size()==0 || answer.back()!=a[i]){

//             answer.push_back(a[i]);
//             }
//             i++;
//     }
//     return answer;

// }