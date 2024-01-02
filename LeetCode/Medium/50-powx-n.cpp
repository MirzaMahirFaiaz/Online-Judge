class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0)return 1;
        else if(n>0){
            double temp=myPow(x,n/2);
            if (n%2!=1)return temp*temp;
            else
                 return x*temp*temp; 
        }
        else{
            n*=-1;
            return 1/(x*myPow(x,n-1));   
        }     
        
    }
};
