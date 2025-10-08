#include <iostream>
#include <vector>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    char digit;
    cin>>t;
    while(t--) {
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        bool possible = true;

        for (int i = 0; i < n; ++i) {
            cin >> digit;
            v1[i] = digit-'0';
        }
        for (int i = 0; i < n; ++i) {
            cin >> digit;
            v2[i] = digit-'0';
            if (v2[i]==1 && v1[i] == v2[i]) {
                possible = false;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
}