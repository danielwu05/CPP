# include <iostream>
# include <cstring>
#include <set>
using namespace std;
int main () {
    int t,t2,n,j=0;
    set<char>letters;
    char L;
    int teams[100]={0};
    cin >> t;
    t2 = t;
    while(t--) {
        cin >> n;
        for (int i=0; i<n ;i++) {
            cin >> L;
            if(letters.find(L)!=letters.end()){
                teams[j]++;
            }
            else {
                letters.insert(L);
                teams[j]+=2;
            }
        }
        letters.clear();
        j++;
    }
    for (int i=0;i<t2;i++) {
        cout << teams[i] <<endl;
    }
}

