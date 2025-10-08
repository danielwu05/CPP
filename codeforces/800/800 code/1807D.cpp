# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>

using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,q,l,r,k,input;
    long long int soma;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> q;
        vector<int> ans(n);
        vector<long long> accum(n+1,0);
        for (int i=0; i<n; i++) {
            cin >> input;
            ans.push_back(input);
            accum[i+1] = accum[i] + input;
        }
        while(q--){
            soma = 0;
            cin >> l >> r  >> k;
            long long delta = accum[r] - accum[l-1];
            soma = (r-l+1)*k-delta+accum[n];
            cout << (soma%2==0 ? "NO" : "YES") << "\n";
        }
    }
}