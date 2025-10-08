# include <iostream>
using namespace std;
 
int main () {
    int result=0;
    int n, k;
    cin >> n >>k;
    int input[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for (int j=0; j<n ; j++) {
        if (input[j]>=input[k-1] && input[j]>0) {
            result++;
        }


    }
    
    cout << result;
    }