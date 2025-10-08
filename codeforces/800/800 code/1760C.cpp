# include <iostream>
#include <vector>
# include <algorithm>
#include <set>
using namespace std;
int main () {
    int t,len,max,sec,num;
    vector<int> array;
    vector<int> copy;
    cin >> t;
    while(t--) {
        cin >> len;
        for (int i=0; i<len; i++) {
            cin >> num;
            array.insert(array.begin()+i,num);
        }
        copy = array;
        sort(array.begin(),array.end());
        max = array.at(len-1);
        sec = array.at(len-2);
        for (int i=0; i<len; i++) {
            if (copy.at(i)-max!=0){
                cout<< copy.at(i)-max << " ";
            }
            else {
                cout<< copy.at(i)-sec<< " ";
            }
        }
        sec = 0;
        max =0;
        array.clear();
        copy.clear();
        cout <<"\n";
    }

}

