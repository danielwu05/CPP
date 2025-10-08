#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,x,y,result;
    cin>>t;
    while(t--) {
        cin>>n>>m>>x>>y;
        result = m+n;
        while (n--) {
            cin >> x;
        }
        while (m--) {
            cin >> y;
        }
        cout<<result<<endl;
    }
}