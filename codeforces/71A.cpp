# include <iostream>
# include <cstring>
using namespace std;
int main () {
    int t;
    cin>> t;
    while (t--) {
        char word[101];
        cin >> word;
        int count=strlen(word);
        if (count>10){
            cout << word[0] << count -2 << word[count-1]<<"\n";
        }
        else {
            cout << word <<"\n";
        }
    }
}
