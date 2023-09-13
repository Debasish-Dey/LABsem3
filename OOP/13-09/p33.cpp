#include<iostream>
using namespace std;

class arithmetic{
    public:
    int num1,num2;
    void getnums(){
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
};

class pluss: public arithmetic{
    public:
    int sum;
    void add(){
    int sum = num1 + num2;
    }
};

class minuss{
    public:
    int n1,n2;
    int diff;
    void getns(){
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }
    void sub(){
        diff= n1-n2;
    }
};

class result: public pluss, public minuss{
    public:
    void display(){
        add();
        sub();
        cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
        cout << "Difference of " << n1 << " and " << n2 << " is " << diff << endl;
    }
};

int main()
{
    result r;
    r.getnums();
    r.getns();
    r.display();
    return 0;
}