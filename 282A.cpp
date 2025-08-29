# include <iostream>
# include <cstring>
using namespace std;
int main () {
    int result=0;
    string input;
    int t;
    cin >> t;

    while (t--) {

        cin >> input;
        if (input[1] == '+') {
            result++;
        }
        else {
            result --;
        }


    }
    cout << result;
}
