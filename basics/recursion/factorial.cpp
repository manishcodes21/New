//   vector<long long> factorialNumbers(long long N)
//     {
//         // Write Your Code here
//         long long fact=1;
//         vector<long long>ans;
//         for(int i=1;fact<=N;i++){
//             fact*=i;
//             if(fact<=N)
//             ans.push_back(fact);
//         }
//         return ans;
//     }