  long long sum=0;
    long long sumOfSeries(long long N) {
        // code here
        if(N==0) return 0;
        else{
            sum =N*N*N+sumOfSeries(--N);;
            
            
        }
        return sum;
    }