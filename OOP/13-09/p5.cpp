#include<iostream>
using namespace std;
class variable{
    protected:
    int b,h,l,br,s;
};

class triangle: virtual public variable{
    public:
    void getdata(){
        cout << "Enter base of triangle: ";
        cin>> b;
        cout << "Enter height of triangle: ";
        cin >> h;
    }
};

class rectangle: virtual public variable{
    public:
    void getdata1(){
        cout << "Enter length of rectangle: ";
        cin >> l;
        cout << "Enter breadth of rectangle: ";
        cin >> br;
    }
};

class square: virtual public variable{
    public:
    void getdata2(){
        cout << "Enter side of square: ";
        cin >> s;
    }
};

class area: public triangle, public rectangle, public square{
    protected:
    int area1, area2, area3;
    public:
    void calculate(){
        getdata();
        getdata1();
        getdata2();
        area1 = b * h*(0.5);
        area2 = l*br;
        area3 = s*s;
        cout << "Area of Trianlge is: " << area1 << endl;
        cout << "Area of Rectangle is: "<< area2 << endl;
        cout << "Area of Square is: " << area3 << endl;
    }
};

int main(){
    area a;
    a.calculate();
    
    return 0;
}