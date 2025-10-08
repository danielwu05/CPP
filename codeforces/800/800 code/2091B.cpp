#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,value,times;
    cin>>t;
    while(t--) {
        int count = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = n-1; i >= 0; --i) {
            if (v[i] >= x || value >= x) {
                 count += 1;
                 times = 0;
                 value = 0;

            }
            if (v[i] < x) {
                value = min(v[i-1],v[i]);
                ++times;
                value *= times;
            }
        }
        cout << count ;
        cout << endl;

    }
}