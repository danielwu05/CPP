#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>
#include <string>
#include <cstring>
#include <cstdlib>


using namespace std;
int main () {
    int t,n;
    string word;
    int result[3]={0};
    string array[3][101];
    set<string> four;
    set<string> three;
    set<string> two;

    cin >> t;
    while(t--) {
        cin >> n;
            for(int j=0; j<3; j++) {
                for(int i=0;i<n;i++) {
                    cin >> word;
                    array[i][j]=word;
                    if (two.find(array[i][j])!=two.end()){
                        if (three.find(array[i][j])!=three.end()){
                            four.insert(array[i][j]);
                        }
                        three.insert(array[i][j]);
                    }
                    two.insert(array[i][j]);
                }
            }
            for(int j=0;j<3;j++) {
                    result[3]={0};
                    for(int i=0;i<n;i++) {
                            result[j]+=3;
                            if (three.find(array[i][j])!=three.end()) {
                                result[j]+=-2;
                                cout << "\num";
                            }
                            else if (two.find(array[i][j])!=two.end()) {
                                result[j]+=0;
                                cout << "\ndois";
                            }
                }
            }

            for(int j=0;j<3;j++) {
                cout << result[j];
            }


    }
    system("pause");
}
