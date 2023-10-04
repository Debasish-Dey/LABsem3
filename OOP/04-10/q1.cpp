#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void getdata(){
        cout<< "Enter number: ";
        cin >> a;
    }
    friend A operator*(A p2, A p1){
        A temp;
        temp.a=p2.a*p1.a;
        return temp;
    }
    void show(){
        cout << a;

    }
};

int main()
{
    A xyz,pqr;
    xyz.getdata();
    pqr.getdata();
    A abc = xyz*pqr;
    cout << "Numbers after multiplication: ";
    abc.show();

return 0;
}