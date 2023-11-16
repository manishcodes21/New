//https://leetcode.com/problems/rotate-image/description/
//optimal in place   tc:O(n*n) sc:O(1)
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();//no .of rows adn coloumns
//          transposing the matrix
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i<j){
//                     swap(matrix[i][j],matrix[j][i]);
//                 }
//             }
//         }
//         reversing all the rows 
//         for(int i=0;i<n;i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }

// };



//brute sc:O(n*n)
// #include<vector>

// void rotateMatrix(vector<vector<int>> &mat){
// 	// Write your code here.
// 	vector<vector<int>> ans;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			ans[j][n-1-i]=mat[i][j];
// 		}
// 	}
// 	return ans;
	
// }