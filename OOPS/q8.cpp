#include<iostream>
using namespace std;

class xyz{
    int m1,m2;
    public:
    xyz(int v,int x) : m1(v),m2(x) {
        
    }

    void vals(){
        cout<<m1<<" "<<m2;
    }
};

int main(){
    xyz *ptr = new xyz(25,4);
    ptr->vals();
}
