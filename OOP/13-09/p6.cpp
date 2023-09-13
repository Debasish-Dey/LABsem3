#include<iostream>
using namespace std;

class Main{
    private:
    int num1,num2;
    public:
    Main(int n1, int n2){
        num1=n1;
        num2=n2;
    }
    Main(const Main &n){
        num1=n.num1;
        num2=n.num2;
    }
    void display(){
        cout<<"Num1 is: " << num1 << endl;
        cout << "Num2 is: " << num2 << endl;
    }
};

int main()
{
    Main obj1(10,20);
    Main obj2 = obj1;
    obj1.display();
    obj2.display();
    
return 0;
}