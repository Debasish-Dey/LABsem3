#include<iostream>
using namespace std;

class num{
    int a, b, c, d;
    public:
    num(int p, int q, int r, int s){
        a=p;
        b=q;
        c=r;
        d=s;
    }
    void display(){
        cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c<<"\nD="<<d<<endl;
    }
    void operator--(){
        a=a-b;
    } 
    void operator++(){
        c=c-d;
    }
};

int main(){
    num x(5,6,7,8);
    cout<<"Before operation";
    x.display();
    --x;
    ++x;
    cout<<"After operation";
    x.display();
    return 0;
}