//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Constructor inside class
#include<iostream>
using namespace std;
class Book
{
    int pages;
    char title[100];
    double price;
public:
    Book()
    {
        cout << "Enter the number of pages: ";
        cin >> pages;
        cout << "Enter the book title: ";
        cin >> title;
        cout << "Enter the price: ";
        cin >> price;
        cout << endl;
    }
    void display()
    {
        cout << "Book Details are: " << endl;
        cout << pages << "\n" << title << "\n" << price;
    }
};
int main()
{
    Book novel;
    novel.display();
    return 0;
}
/*
Output:
Enter the number of pages: 23
Enter the book title: King
Enter the price: 200

Book Details are: 
23
King
200
*/
//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Constructor inside class
#include<iostream>
using namespace std;
class Book
{
    int pages;
    char title[100];
    double price;
public:
    Book()
    {
        cout << "Enter the number of pages: ";
        cin >> pages;
        cout << "Enter the book title: ";
        cin >> title;
        cout << "Enter the price: ";
        cin >> price;
        cout << endl;
    }
    void display()
    {
        cout << "Book Details are: " << endl;
        cout << pages << "\n" << title << "\n" << price;
    }
};
int main()
{
    Book novel;
    novel.display();
    return 0;
}
/*
Output:
Enter the number of pages: 23
Enter the book title: King
Enter the price: 200

Book Details are: 
23
King
200
*/
