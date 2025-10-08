# include <iostream>
using namespace std;

int main () {

    int M[5][5],x,y,result;

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> M[i][j];
            if(M[i][j]==1) {
                x=i;
                y=j;
            }
        }
    }
    //centro = M[2][2]
    result = abs(x-2) + abs(y-2);    

    cout<<result;
}
