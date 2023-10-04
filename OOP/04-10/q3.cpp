#include<iostream>
using namespace std;

class small{
    int number;
    public: 
    void getdata(){
        // cout << "\nEnter numbers: ";
        cin >> number;
    }
    int operator<(small s){
        if(number<s.number)
        return 1;
        else 
        return 0;
    }
    int operator<=(small s){
        if(number <= s.number)
        return 1;
        else 
        return 0;
    }
};

int main()
{

  small p,q;
  cout<< "\nEnter 1st number: ";
  p.getdata();
  cout << "\nEnter 2nd number: ";
  q.getdata();
  if(p<q)
    cout << "P is smaller ";
  else if(p<=q)
    cout << "P is smaller than equal to q";
  else 
  cout << "P is not smaller than q";

return 0;
}