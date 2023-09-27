#include<iostream>
using namespace std;

class num{
    int y,z,x;
    public:
    void input(int a, int b){
        y=a;
        z=b;
    }
    void display(){
        cout<<"\nY="<<y<<"\nZ="<<z<<endl;
    }
    num operator+(num f){
        num temp;
        temp.y=y-f.y;
        temp.z=z-f.z;
        return temp;
    }
}; 

int main(){
    num p, q, r;
    cout<<"Object p";
    p.input(5,6);
    p.display();
    cout<<"Object q";
    q.input(7,8);
    q.display();
    r=p+q;
    cout<<"Now r is: ";
    r.display();
    return 0;
}