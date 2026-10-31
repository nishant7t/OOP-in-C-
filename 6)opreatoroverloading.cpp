#include <iostream>
#include<math.h>
using namespace std;


class Complex
{
    float real, img;


public:
    
    void read()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }


    
    void display()
    {
        if (img >= 0)
            cout << real << "+i" << img << endl;
        else
            cout << real << "-i" << -img << endl;
    }


    
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
};




Complex Complex::operator+(Complex c)
{
    Complex sum;
    sum.real = real + c.real;
    sum.img = img + c.img;
    return sum;
}




Complex Complex::operator-(Complex c)
{
    Complex diff;
    diff.real = real - c.real;
    diff.img = img - c.img;
    return diff;
}




Complex Complex::operator*(Complex c)
{
    Complex product;
    product.real = (real * c.real) - (img * c.img);
    product.img = (img * c.real) + (real * c.img);
    return product;
}


Complex Complex::operator/(Complex c)
{
    Complex quotient;


    float denominator = (c.real * c.real) + (c.img * c.img);


    quotient.real = ((real * c.real) + (img * c.img)) / denominator;
    quotient.img = ((img * c.real) - (real * c.img)) / denominator;


    return quotient;
}


int main()
{
    Complex c, c1, ans;


    c.read();
    c1.read();


    ans = c + c1;
    cout << "\nSum is: ";
    ans.display();


    ans = c - c1;
    cout << "\nDifference is: ";
    ans.display();


    ans = c * c1;
    cout << "\nProduct is: ";
    ans.display();


    ans = c / c1;
    cout << "\nQuotient is: ";
    ans.display();


    return 0; 
}






