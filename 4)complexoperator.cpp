#include <iostream>
using namespace std;

class Complex {
    float real, img;

public:
    void read() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }

    void display() const {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }

    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);
    Complex operator/(const Complex &c);
};

Complex Complex::operator+(const Complex &c) {
    Complex sum;
    sum.real = real + c.real;
    sum.img = img + c.img;
    return sum;
}

Complex Complex::operator-(const Complex &c) {
    Complex diff;
    diff.real = real - c.real;
    diff.img = img - c.img;
    return diff;
}

Complex Complex::operator*(const Complex &c) {
    Complex product;
    product.real = (real * c.real) - (img * c.img);
    product.img = (img * c.real) + (real * c.img);
    return product;
}

Complex Complex::operator/(const Complex &c) {
    Complex quotient;
    float denominator = (c.real * c.real) + (c.img * c.img);
    if (denominator == 0) {
        cout << "\nError: Division by zero!" << endl;
        quotient.real = 0;
        quotient.img = 0;
        return quotient;
    }
    quotient.real = ((real * c.real) + (img * c.img)) / denominator;
    quotient.img = ((img * c.real) - (real * c.img)) / denominator;
    return quotient;
}

int main() {
    Complex c, c1, ans;
    cout << "First Complex Number:" << endl;
    c.read();
    cout << "Second Complex Number:" << endl;
    c1.read();

    ans = c + c1;
    cout << "\nSum is: ";
    ans.display();

    ans = c - c1;
    cout << "Difference is: ";
    ans.display();

    ans = c * c1;
    cout << "Product is: ";
    ans.display();

    ans = c / c1;
    cout << "Quotient is: ";
    ans.display();

    return 0;
}
