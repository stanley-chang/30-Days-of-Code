#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
protected:
    string title;
    string author;
public:
    Book(string t,string a){
        title=t;
        author=a;
    }
    virtual void display()=0;

};

class MyBook: public Book{
private:
    // string title, author;
    int price;
public:
    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    MyBook(string t, string a, int p) : Book(t, a){
        // title = t;
        // author = a;
        this->price =p;
    }
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    virtual void display(){
        cout << "Title: " << this->title <<endl;
        cout << "Author: "<< this->author <<endl;
        cout << "Price: "<< this->price <<endl;
    }
// End class
};
int main() {