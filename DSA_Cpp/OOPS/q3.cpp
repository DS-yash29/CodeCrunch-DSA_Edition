#include<iostream>
using namespace std;

// Array of objects

class Manager{
    string name;
    int age;
    string dept;
    public:
    void getDetails(){
        cout<<"Enter Name of the Manager ";
        cin>>name;
        cout<<"Enter Age of the Manager ";
        cin>>age;
        cout<<"Enter Department of the Manager ";
        cin>>dept;
    }

    void showDetails(){
        cout<<"Employee Name : "<<name;
        cout<<"\nEmployee Age : "<<age;
        cout<<"\nEmployee Department : "<<dept;
    }    
};

int total_managers = 2;

int main(){
    Manager m[total_managers];
    for(int i = 0;i<total_managers;i++){
        cout<<"Details of Manager "<<i+1<<endl;
        m[i].getDetails();
    }
    cout<<endl;
    for(int i = 0;i<total_managers;i++){
        cout<<"Details of Manager "<<i+1<<endl;
        m[i].showDetails();
        cout<<endl;
    }

}