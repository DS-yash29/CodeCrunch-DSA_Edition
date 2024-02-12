#include<iostream>
using namespace std;

// Debug the Code

class stm{
    static int a;
    int number;
    public:
    void increament(int b){
        number = b;
        a++;
    }
    void show(void){
        cout<<a;
    }
};

int stm::a;
int main(){
    stm s1,s2,s3;
    s1.increament(69);
    s1.show();
    s2.show();
    s3.show();
}