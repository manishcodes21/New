//Ideal solution
    // long long sumOfDivisors(int N)
    // {   
    //     long long  sum = 0;
    // 	for (int i = 1; i <= N; ++i) 
    // 		sum += (N / i) * i; 
    // 	return sum;
    // }


// vector<long long> sumofdivofnum(int N ){
//         vector<long long> array(N+1,0);
//         for(int i=1;i<=N;i++){
              
//         for(int j=1;j<=pow(i,0.5);j++){
//             if(i%j==0){
//                 array[i]+=j;
//                 if(i/j!=j){
//                     array[i]+=(i/j);
//                 }
//             }
//         }
//         }
       
//         return array;
//     }
//     long long sumOfDivisors(int n)
//     {
//         // Write Your Code here
//         vector<long long>sum=sumofdivofnum(n);
//         long long z=0;
//         for(int i=1;i<=n;i++){
//             z= z+sum[i];
//         }
//         return z;
        
//     }



