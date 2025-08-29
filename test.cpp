# include <iostream>
using namespace std;

int main () {

    int w;

    cin >> w;

    while (w>2) {
        w = w/2;
    }

    (w==2) ? cout << "YES" : cout << "NO";

    return 0;

}
