# include <iostream>
#include <string>
using namespace std;

class Book {
    public:

        string title;
        string author;
        int year;
};


int main () {

    Book myBook1;

    myBook1.title = "Matilda";
    myBook1.author = "Roald Dahl";
    myBook1.year = 1988;

    Book myBook2;

    myBook2.title = "The Giving Tree";
    myBook2.author = "Shel Silverstein";
    myBook2.year = 1964;

    cout << myBook1.title << ", " << myBook1.author << ", " << myBook1.year << "\n";
    cout << myBook2.title << ", " << myBook2.author << ", " << myBook2.year << "\n";

    return 0;

}
