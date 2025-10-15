#include <iostream>
#include <list>
using namespace std;

int main() {

    char ch[4] = {'a','b','c','d'};
    int num[4] = {1, 2, 3, 4};

    list<string> chList;
    list<int> numList;
     
    chList.push_back("js");
    chList.push_back("matlab");
    chList.push_back("c++");
    chList.push_front("python");

    numList.push_back(2);
    numList.push_back(3);
    numList.push_back(4);
    numList.push_front(1);


    for (int i = 0; i < 4; i++) {
        cout << "ch[" << i << "] = " << ch[i] << ", Address = " << &ch[i] << endl ;
    }


    cout << endl;

    
    for (int n : numList) {
        cout << n << " ";
    }

    cout << endl;


}