// User function Template for C++
bool prime(int n){
    if(n<=1)    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int nextPrime(int n) {

    // code here to find next prime number
    // return next prime number
    for(int i=n+1;i<INT_MAX;i++){
        if(prime(i)){
            return i;
        }
    }
    return 0;
}