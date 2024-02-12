#include<iostream>
using namespace std;

class Shopping{

    int item_code[50];
    int item_price[50];
    public:
    int total_items;
    Shopping(){
        total_items = 0;
    }

    void addItems(int id,int price){
        item_code[total_items] = id;
        item_price[total_items] = price;
        total_items++;
    }

    void deleteItem(){
        total_items --;
    }

    void generateBill(){
        cout<<"Your Order Details \n";
        cout<<"\nId      Price\n";
        int total = 0;
        for(int i = 0;i<total_items;i++){
            cout<<item_code[i]<<"         "<<item_price[i]<<endl;
            total += item_price[i];
        }

        cout<<"\nYour Total Amount is :  "<<total;
    }
};

int main(){
    Shopping s1;
    s1.addItems(1,50);
    s1.addItems(2,100);
    s1.addItems(3,150);
    s1.addItems(4,1000);
    s1.deleteItem();
    s1.generateBill();
}