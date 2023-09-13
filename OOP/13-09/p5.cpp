#include <iostream>
using namespace std;

class areatriangle{
    public:
    float h,b;
    void gethb(){
        cout<<"Enter height and base: ";
        cin>>h>>b;
    }
};
class arearectangle{
    public:
    int hr,br;
    void gethbr(){
        cout<<"Enter length and breadth: ";
        cin>>hr>>br;
    }
};
class areasquare{
    public:
    int s;
    void getsq(){
        cout<<"Enter side: ";
        cin>>s;
    }
};
class areacircle{
    public:
    float r;
    void getr(){
        cout<<"Enter radius: ";
        cin>>r;
    }
};
class area: virtual public arearectangle, virtual public areatriangle, virtual public areasquare, virtual public areacircle{
    public:
    void display(){
        cout<<"The area of triangle is "<<(0.5)*h*b<<endl;
        cout<<"The area of rectangle is "<< hr * br<<endl;
        cout<<"The area of square is "<<s*s<<endl;
        cout<<"The area of circle is "<<(3.14)*r*r<<endl;
    }
};

int main(){
    area a;
    a.gethb();
    a.gethbr();
    a.getsq();
    a.getr();
    a.display();
    return 0;
}