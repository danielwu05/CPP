#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>x>>n;
        if(n%2==0) {
            x = 0;
        } 
        cout<<x<<endl;
    }
}