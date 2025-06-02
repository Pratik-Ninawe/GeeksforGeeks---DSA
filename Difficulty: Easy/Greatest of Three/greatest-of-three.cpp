#include <iostream>
using namespace std;

int main() {
    // code here
    int a,b,c;
    cin>>a>>b>>c;
    int d=((a>=b && a>=c)?a:(b>=c && b>=a)?b:(c>=a && c>=b)?c:a);
    cout<<d;
    return 0;
}