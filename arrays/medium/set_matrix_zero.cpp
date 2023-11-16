//https://leetcode.com/problems/set-matrix-zeroes/submissions/993294657/
//optimal tc:
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size(); // number of rows
//         int m=matrix[0].size(); // number of coloumns
//         //extra spce                inspace
//         //int row[n]={0};              matrix[..][0]
//         //int coloumn[m]={0};           matrix[0][..]
//         int col0=1;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     //mark thr ith row
//                     matrix[i][0]=0;
//                     //change thr jth coloumn
//                     if(j!=0)
//                     matrix[0][j]=0;
//                     else 
//                     col0=0;
//                 }
//             }

//         }
//         for(int i=1;i<n;i++){
//             for(int j=1;j<m;j++){
//                 if(matrix[i][0]==0 || matrix[0][j]==0){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//         if(matrix[0][0]==0){
//             for(int j=0;j<m;j++){
//                 matrix[0][j]=0;
//             }
//         }
//         if(col0==0){
//             for(int i=0;i<n;i++){
//                 matrix[i][0]=0;
//             }
//         }
        
//     }
// };


//https://www.codingninjas.com/studio/problems/zero-matrix_1171153?leftPanelTab=1
//better tc:O(2*n*m) sc:O(n+m)
// #include <bits/stdc++.h> 
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
// 	// Write your code here.
// 	vector<int>row(n,0);
// 	vector<int>col(m,0);
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(matrix[i][j]==0){
// 				row[i]=1;
// 				col[j]=1;
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(row[i]==1 || col[j]==1){
// 				matrix[i][j]=0;
// 			}
// 		}
// 	}
// 	return matrix;
// }