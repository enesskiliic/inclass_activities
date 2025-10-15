#include <iostream>
using namespace std;


int fact(int num) {

    if (num == 1) return 1;

    int partialMult = fact(num - 1);

    return partialMult * num;

}

int main() {

    int result = fact(5);

    cout << "A Factorial of 5 using Recursion: " << result;



}