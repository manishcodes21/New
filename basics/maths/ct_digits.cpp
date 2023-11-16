int evenlyDivides(int N){
        //code here
        long long int x=N;
        long long int ct=0;
        while(x>0){
            long long int z = x%10;
            if(z!=0 && N%z==0) ct++;
            x=x/10;
        }
    
        return ct;
    }
    