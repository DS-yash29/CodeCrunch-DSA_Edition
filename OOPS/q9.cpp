#include<iostream>
using namespace std;

class Matrix{
    int row,col;
    int** m;
    public:
    Matrix(int r,int c);
    void insertspecificElements(int r,int c,int val);
    void traversal();
    void fetchElem(int r,int c);
};

Matrix :: Matrix(int r,int c){
    row = r;
    col = c;
    m = new int *[row];
    for(int i = 0;i<row;i++){
        m[i] = new int[col];
    }

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){ // Initializ matrix with zero elements
            m[i][j] = 0;
        }
    }
}

void Matrix :: insertspecificElements(int r,int c,int val){
    if(r>=row || c>=col){
        cout<<"Invalid Positions\n";
        return;
    }
    m[r][c] = val;
}

void Matrix :: traversal(){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<m[i][j] << " ";
        }cout<<endl;
    }
}

void Matrix::fetchElem(int r,int c){
    if( (r>=0 && r<row) && (c>=0 && c<col)){
        cout<<"Elements at "<<r+1<<" row & "<<c+1<<" col is \n";
        cout<<m[r][c];
        return;
    }
    cout<<"Invalid insertion \n";
}

int main(){
    Matrix m1(2,2);
    m1.insertspecificElements(0,0,4);
    m1.insertspecificElements(0,1,9);
    m1.insertspecificElements(1,0,27);
    m1.insertspecificElements(1,1,29);
    m1.traversal();
    m1.fetchElem(0,0);
}


