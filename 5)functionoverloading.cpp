#include <iostream>
using namespace std;

int add(int a, int b);
int add(int a, int b, int c);

int main() {
    int m = 5, n = 6, b = 3;
    int z = add(m, n);
    cout << "The sum (2 args): " << z << endl;
    int x = add(m, n, b);
    cout << "The sum (3 args): " << x << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
