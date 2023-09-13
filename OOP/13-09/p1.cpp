#include<iostream>
using namespace std;

class sub1{
    protected:
    int mark1;
    public:
    void getdata1(){
        cout << "Enter marks of first subject: ";
        cin >> mark1;
    }
};

class sub2{
    protected:
    int mark2;
    public:
    void getdata2(){
        cout << "Enter marks of second subject: ";
        cin >> mark2;
    }
};

class sub3{
    protected:
    int mark3;
    public:
    void getdata3(){
        cout << "Enter marks of third subject: ";
        cin >> mark3;
    }
};

class sub4{
    protected:
    int mark4;
    public:
    void getdata4(){
        cout << "Enter marks of forth subject: ";
        cin >> mark4;
    }
};

class sub5{
    protected:
    int mark5;
    public:
    void getdata5(){
        cout << "Enter marks of fifth subject: ";
        cin >> mark5;
    }
};

class grade:public sub1,public sub2,public sub3,public sub4, public sub5{
    float avg;
    long roll;
    public:
    void calculateGrade(long roll){
        int marks = mark1 + mark2 + mark3 + mark4 + mark5;
        avg = marks/(5.0);
        cout << "The grade obtained by roll "<<roll<<" is "<< avg << endl;
    }
    void obtainMarks(){
        int n;
        cout << "Enter number of students: ";
        cin>> n;
        for(int i=0;i<n; i++){
            cout << "Enter student roll: ";
            cin >> roll;
            getdata1();
            getdata2();
            getdata3();
            getdata4();
            getdata5();
            calculateGrade(roll);

        }

    }
};

int main()
{
   grade g;
   g.obtainMarks(); 
return 0;
}