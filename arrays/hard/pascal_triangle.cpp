//optimal tc:O(n^2)
// class Solution {
// public:
//     vector<int> eachrow(int row){
//         vector<int>temp;
//         int ans=1;
//         temp.push_back(ans);
//         for(int c=1;c<row;c++){
//             ans=ans*(row-c);
//             ans=ans/c;
//         temp.push_back(ans);

//         }
//         return temp;
//     }
//     vector<vector<int>> generate(int numRows) {
//         vector<int>temp;
//         vector<vector<int>>temp1;
//         for(int i=1;i<=numRows;i++){
//             temp=eachrow(i);
//             temp1.push_back(temp);
//         }
//         return temp1;
//     }
// };