#include <iostream>
using namespace std;

class Student{ // student is new data type created by me 
    public:

        string name;
        int roll ;
        float marks;
        int age;

};

int main(){
    Student x;
    x.name="Rahul";
    x.roll=101;
    x.marks=90.5;
    Student x1;
    x1.name="samay";
    x1.roll=10;
    x1.marks=9.5;
    cout<<x.name<<endl; // we doing this by . operator
    cin>>x.age;
    cout<<x.age<<endl;
}