#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int row;
    int col;
    cout << "Enter the row number: ";
    cin >> row;
    cout << "Enter the col number: ";
    cin >> col;
    vector<int> X(row * col);
    int value = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int loc = (i * col) + j;
            X[loc] = value;
            cout << "num[" << i << "][" << j << "]= " << X[loc] << ", Address = " << &X[loc] << endl;
            value++;
        }
    }

    cout << endl;
}