#include <iostream>
using namespace std;
#include <stack>

int main() 
{
    string state;
    stack<int> s;
    stack<int> temp;
    int temporal;
    int arr[5];
    if (s.empty())
    {
        state = "empty";
    } else
    {
        state = "not empty";
    }
    cout << "Check stack initial state: " << state << endl;
    cout << "Enter 5 elements: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << " ";
        cin >> temporal;
        arr[i] = temporal;
        s.push(temporal);
    }
    cout << "Show stack element (print first in to last in): " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    int boyut = s.size();
    cout << endl << "Show stack element (print last in to first in): " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
    cout << endl << "Delete last two elements from stack then show stack elements (print last in to first in)" << endl;
    s.pop();
    s.pop();
    cout << s.top() << " ";
    temp.push(s.top());
    s.pop();
    cout << s.top();
    temp.push(s.top());
    s.pop();
    s.push(temp.top());
    temp.pop();
    s.push(temp.top());
    temp.pop();

}