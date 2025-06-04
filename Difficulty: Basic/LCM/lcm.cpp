#include <iostream>
using namespace std;

int main() {
    // code here
    long long a,b,c;
    cin>>a>>b;
    long long gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a % i == 0 && b % i == 0){
            gcd=i;
        }
        c=(a*b)/(gcd);
    }
    cout<<c;

    return 0;
}