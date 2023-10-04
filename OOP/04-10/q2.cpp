#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    void getdata(){
        cout << "Enter Real Part: ";
        cin>> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    }
    void show(){
        cout << real << " +i" << img << endl;
    }
    friend complex operator+(complex X, complex Y){
        complex temp;
        temp.real = X.real + Y.real;
        temp.img = X.img + Y.img;
        return temp;
    }
    friend complex operator-(complex X, complex Y){
        complex temp;
        temp.real = X.real - Y.real;
        temp.img = X.img - Y.img;
        return temp;
    }
};

int main()
{
    complex X,Y,Z,W;
    X.getdata();
    Y.getdata();
    Z = X+Y;
    W = X-Y;
    cout << "First Complex Number: ";
    X.show();
    cout << "Second Complex NUmber: ";
    Y.show();
    cout << "Sum of Numbers: ";
    Z.show();
    cout << "Difference of Numbers: ";
    W.show();
return 0;
}