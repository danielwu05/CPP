# include <iostream>
# include <cstring>
using namespace std;
int main () {
    int count=0;
    int input;
    int t;
    cin >> t;
    while (t--) {
        int streak=0;

        for(int i=0; i<3; i++){
            cin >> input;

            

            if(input==1) {
                streak++;
            }
        }
        
        if (streak>=2) {
            count++;
        }
    }
    cout << count;
}
