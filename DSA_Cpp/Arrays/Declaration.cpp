#include<iostream>
using namespace std;

/*
    Declaring & Initiializing an array of integers
    Syntax :
    Datatype variable_name[size of array];
    variable_name = {e1,e2,e3,e4,....,en};
    Indexing of arrays starts from 0 and goes till size-1;
*/

int main(){
    int array1[5] ; // Declaring an array of 5 elements. Initially it holds some garbage values.
    array1[0] = 5; // Initialization.
    cout<<"Printing Elements of Array1 : ->"<<endl;
    for(int i = 0;i<5;i++){
        cout<<array1[i]<<" "; // Prints 5 abd some garbage elements.
    }cout<<endl;

    // Another Way to Initialize an array

    int array2[4] = {1,2,3,4};
    cout<<"Printing Elements of Array2 : ->"<<endl;
    for(int i = 0;i<sizeof(array2)/sizeof(int);i++){ //sizeof(array) returns the length*sizeof(int) 
        cout<<array2[i]<<" ";
    }cout<<endl;
}