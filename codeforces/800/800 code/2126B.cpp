        #include <iostream>
        #include <vector>
        using namespace std;
        int main () {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int t,n,k,streak,i;
            cin>>t;
            while(t--) {
                streak = 0;
                cin>>n>>k;

                vector<int> result(n);
                for (i=0; i<n; ++i) {
                    cin>>result[i];
                }
                i = 0;
                streak = 0;
                while(i <= n-k) {

                    bool possible = true;
                    for (int j =0; j<k; ++j) {
                        if (result[i+j] == 1) {
                            possible = false;
                            i = i + j + 1;
                            break;
                        }
                    }
                        if (possible) {
                            streak++;
                            i = i + k + 1;
                        }

                }
                cout<<streak<<endl;
            }
        }