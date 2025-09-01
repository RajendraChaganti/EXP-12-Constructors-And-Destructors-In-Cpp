//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Destructors
#include<iostream>
using namespace std;
int created = 0;
int remaining = 4;
class Box {
public:
    Box() {
        created++;
        cout << "Box created. Total created: " << created << endl;
    }
    ~Box() {
        --remaining;
        cout << "Box destroyed. Remaining: " << remaining << endl;
    }
};
int main() {
    Box b1, b2, b3;
    {
        Box b4;
    }
    return 0;
}
/*
Output:
Box created. Total created: 1
Box created. Total created: 2
Box created. Total created: 3
Box created. Total created: 4
Box destroyed. Remaining: 3
Box destroyed. Remaining: 2
Box destroyed. Remaining: 1
Box destroyed. Remaining: 0
*/
