#include<iostream>
using namespace std;

/* Creating a static member function showcount which keeps track of number of objects created. */

class Mission{
    int mission_id;
    string mission_name;
    static int counter;
    public:
    static void showcount(){
    cout<<"No of objects created till now: "<<counter<<endl;
}
    Mission(){
        counter++;
    }
};

int Mission :: counter;
int main(){
    Mission m1;
    Mission:: showcount();
    Mission m2;
    Mission::showcount();
}
