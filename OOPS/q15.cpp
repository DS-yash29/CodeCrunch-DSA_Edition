#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream file("Book1.csv"); // Replace "data.csv" with your CSV file name
    string line;

    if (!file.is_open()) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    cout << "Contents of the CSV file in tabular form:" << endl;

    while (getline(file, line)) {
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, ',')) { 
            cout << setw(15) << cell; 
        }
        cout << endl;
    }

    file.close();
    return 0;
}
