#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
    
protected:
    int protectedVar;
    
public:
    int publicVar;
    
    Base() {
        cout << "Enter a value for private Variable : ";
        cin >> privateVar;
        
        cout << "Enter a value for protected Variable: ";
        cin >> protectedVar;
        
        cout << "Enter a value for public variable: ";
        cin >> publicVar;
    }

};

class Derived : public Base {
public:
    void AccessBaseMembers() {
        cout << "Derived class accessing base class members:" << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

int main() {
    Derived derivedObj;

    derivedObj.AccessBaseMembers();

    return 0;
}
