#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    String() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }

    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String(const String& s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }

    ~String() {
        delete[] str;
    }

    void Accepts() {
        char buffer[1000];
        cout << "Enter a string: ";
        cin.getline(buffer, 1000);
        
        delete[] str;
        length = strlen(buffer);
        str = new char[length + 1];
        strcpy(str, buffer);
    }

    void Display() const {
        cout << str << endl;
    }
};

int main() {
    String s1;
    s1.Accepts();
    cout << "You entered: ";
    s1.Display();

    String s2("Hello, C++!");
    cout << "Parameterized string: ";
    s2.Display();

    String s3 = s2;
    cout << "Copied string: ";
    s3.Display();

    return 0;
}
