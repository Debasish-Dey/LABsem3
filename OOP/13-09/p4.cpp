#include<iostream>
using namespace std;

class num{
    public:
    int a,b;
    void getdata(){
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};

class sum: public num{
    public:
    void displaySum(){
        cout << "The sum of numbers is: " << a+b << endl;
    }
};

class diff: public num{
    public:
    void displayDiff(){
        cout << "The difference of numbers is: " << a-b << endl;
    }
};

int main()
{
    sum s1;
    s1.getdata();
    s1.displaySum();
    diff d1;
    d1.getdata(); 
    d1.displayDiff();
    return 0;
}