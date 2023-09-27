#include<iostream>
using namespace std;

class number{
    public:
    int a, b;
    void input(int p, int q){
        a=p;
        b=q;
    }
    void display(){
        cout<<"\nA="<<a<<"\nB="<<b<<endl;
    }
    number operator+(number x)
    {
    number temp;
    temp.a+=a+x.a;
    temp.b+=b+x.b;
    return temp; 
    }
};

// class sum:public number{
//     public:
// };


int main(){
    number t, e, ss;
    t.input(8,5);
    e.input(5,6);
    cout<<"Before adding"<<endl;
    cout<<"T";
    t.display();
    cout<<"E";
    e.display();
    ss=t+e;
    cout<<"After operation";
    ss.display();
    return 0;
}