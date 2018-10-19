//This program takes two 2x2
//matrices and displays sum

#include <iostream>

using namespace std;

int main(void) {

    //initialize input and sum matrices
    int m1[2][2];
    int m2[2][2];
    int sum[2][2];

    //Taking Matrix 1 input from user
    cout << "Please enter Matrix 1 elements\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "m" << i + 1 << j + 1<<"  ";
            cin >> m1[i][j];
        }

    }

    //Taking Matrix 2 input from user
    cout << "Please enter Matrix 2 elements\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "m" << i + 1 << j + 1 << "  ";
            cin >> m2[i][j];
            
        }
    }

    //summing matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
            
        }
    }

    //displaying matrices
    cout << "Sum Matrix"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j]<<"   ";
        }
        cout << endl;
    }
    return 0;
}
