#include <iostream>
using namespace std;

int main() {

    int num;
    int range;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    
}