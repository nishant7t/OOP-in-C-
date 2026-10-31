#include <iostream>
using namespace std;

class numbersum {
private:
    int start, end, even = 0, odd = 0;

public:
    void range();
    void sum();
    int geteven();
    int getodd();
    void display();
};

void numbersum::range() {
    cout << "Give range (start and end): ";
    cin >> start >> end;
}

void numbersum::sum() {
    even = 0;
    odd = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
}

int numbersum::geteven() { return even; }
int numbersum::getodd() { return odd; }

void numbersum::display() {
    cout << "The sum of even numbers is: " << geteven() << endl;
    cout << "The sum of odd numbers is: " << getodd() << endl;
}

int main() {
    numbersum N;
    N.range();
    N.sum();
    N.display();
    return 0;
}
