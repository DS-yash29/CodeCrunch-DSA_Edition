#include <iostream>
#include <vector>
using namespace std;

class matrix {
    int r, c;
    vector<vector<int>> v;

public:
matrix();
    matrix(int r, int c);
    void display();
    void insert(int i, int j, int val);
    matrix operator+(matrix &m);
    matrix operator*(matrix &m);
    bool operator==(matrix &m);
};

matrix::matrix(int r, int c) : r(r), c(c), v(r, vector<int>(c, 0)) {}

void matrix::display() {
    if (v.empty()) {
        cout << "Matrix is empty!" << endl;
        return;
    }
    cout << "Displaying Current Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix::insert(int i, int j, int data) {
    if (i >= 0 && i < r && j >= 0 && j < c)
        v[i][j] = data;
    else {
        cout << "Enter a valid position in the given range." << endl;
    }
}

matrix matrix::operator+(matrix &m) {
    
    matrix res(r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res.v[i][j] = v[i][j] + m.v[i][j];
        }
    }
    return res;
}

matrix matrix::operator*(matrix &m) {
    matrix res(r, m.c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < m.c; j++) {
            for (int k = 0; k < c; k++) {
                res.v[i][j] += v[i][k] * m.v[k][j];
            }
        }
    }
    return res;
}

bool matrix::operator==(matrix &m) {
    if (r != m.r || c != m.c) {
        return false;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (v[i][j] != m.v[i][j])
                return false;
        }
    }
    return true;
}

int main() {
    matrix m1(2, 3);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            m1.insert(i, j, (i + 1) * (j + 1));
        }
    }
    m1.display();
    matrix m2(2,3);
    m2.insert(0,0,0);
    m2 = m1+ m2;
    m2.display();
    if(m1 == m2){
        cout<<"Equal Matrices ";
    }else{
        cout<<"Unequal";
    }
    
    return 0;
}
