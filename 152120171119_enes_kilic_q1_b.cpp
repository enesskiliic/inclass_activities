#include <iostream>
using namespace std;

int main()
{

    int num = 1;
    for (int i = 5; i > 0; i--)
    {

        num *= (i);
    }

    cout << "A Factorial of 5 using Iteration  is: " << num;
}