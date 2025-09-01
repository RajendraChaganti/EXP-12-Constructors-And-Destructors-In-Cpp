//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Constructor outside class
#include<iostream>
using namespace std;
class Book
{
    int pages;
    char title[100];
    double price;
public:
    Book(); // Constructor declared
    void display();
};
// Constructor defined outside the class
Book::Book()
{
    cout << "Enter the number of pages: ";
    cin >> pages;
    cout << "Enter the book title: ";
    cin >> title;
    cout << "Enter the price: ";
    cin >> price;
    cout << endl;
}
void Book::display()
{
    cout << "Book Details are: " << endl;
    cout << pages << "\n" << title << "\n" << price;
}
int main()
{
    Book novel;
    novel.display();
    return 0;
}
/*
Output:
Enter the number of pages: 28
Enter the book title: Lion
Enter the price: 156

Book Details are: 
28
Lion
156
*/
