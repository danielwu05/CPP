# include <iostream>
# include <string>
using namespace std;

int main () {

    string word;

    int count=word.length();
    cin << word;

    if (count>10){
        for(int i: word){
            if(i==0 || i==word.length()){
                cout<<word[i];
            }
            cout<<count-2;
        }
    }
    


}
