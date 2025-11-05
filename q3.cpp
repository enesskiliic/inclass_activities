#include <iostream>
#include <list>
using namespace std;

int main()
{

    char ch[4] = {'a', 'b', 'c', 'd'};
    int num[4] = {1, 2, 3, 4};

    list<char> chList;
    list<int> numList;

    chList.push_back('b');
    chList.push_back('c');
    chList.push_back('d');
    chList.push_front('a');

    numList.push_back(2);
    numList.push_back(3);
    numList.push_back(4);
    numList.push_front(1);

    cout << "Array and int:" << endl;
    for (int i = 0; i < 4; i++)
    {

        cout << "num[" << i << "] = " << num[i] << ", Address = " << &num[i] << endl;
    }

    cout << endl;

    cout << "Array and char:" << endl;
    for (int i = 0; i < 4; i++)
    {

        cout << "ch[" << i << "] = " << ch[i] << ", Address = " << (void *)&ch[i] << endl;
    }

    cout << endl;

    cout << "Linked list and int:" << endl;
    for (auto &i : numList)
    {

        cout << "numList[" << i << "] = " << i << ", Address = " << &i << endl;
    }

    cout << endl;

    cout << "Linked list and char:" << endl;
    for (auto &i : chList)
    {

        cout << "chList[" << i << "] = " << i << ", Address = " << (void *)&i << endl;
    }

    cout << endl;
}