#include<iostream>
using namespace std;

class num{
    int a, b;
    public:
    num(int p, int q){
        a=p;
        b=q;
    }
    void display(){
        cout<<"\nA="<<a<<"\nB="<<b<<endl;
    }
    void operator-(){
        a=-a;
        b=-b;
    }
}; 

int main(){
    num x(8,9);
    cout<<"Before operation";
    x.display();
    -x;
    cout<<"After operation";
    x.display();
    return 0;
}