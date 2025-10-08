# include <iostream>
# include <set>
# include <algorithm>

using namespace std;
int main () {
    int t,len,input;
    bool repeated;
    set<int>ans;
    cin >> t;
    while(t--) {
        cin >> len;
        for (int i=0; i<len; i++) {
                cin >> input;
                if(ans.count(input)){
                    repeated=true;
                    ans.clear();
                }
                ans.insert(input);
        }
        ans.clear();
        if(repeated) {
            cout << "YES";
            repeated=false;
        }
        else{
            cout << "NO";
        }
        cout<<"\n";
    }
}
