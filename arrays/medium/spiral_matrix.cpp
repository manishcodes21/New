//https://leetcode.com/problems/spiral-matrix/submissions/993324310/
//tc:O(n*m) sc:O(n*m)
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int n=matrix.size(); //rows
//         int m=matrix[0].size(); //coloumns
//         int left=0,top=0,right=m-1,bottom=n-1;
//         vector<int>ans;
//         while(left<=right && top<=bottom){
//             for(int i=left;i<=right;i++){
//                 ans.push_back(matrix[top][i]);
//             }
//             top++;
//             for(int i=top;i<=bottom;i++){
//                 ans.push_back(matrix[i][right]);
//             }
//             right--;
//             if(top<=bottom){

//             for(int i=right;i>=left;i--){
//                 ans.push_back(matrix[bottom][i]);
//             }
//             bottom--;
//             }
//             if(left<=right){

//             for(int i=bottom;i>=top;i--){
//                 ans.push_back(matrix[i][left]);
//             }
//             left++;
//             }
//         }
//     return ans;
//     }
// }; 