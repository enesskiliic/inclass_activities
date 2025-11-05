#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> temp;
    stack<int> sort;
    int temporal;
    int max;
    cout << "Enter 4 elements: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << " ";
        cin >> temporal;
        s.push(temporal);
    }

    while (!s.empty())
    {
        max = s.top();
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
            if (temp.top() > max)
            {
                max = temp.top();
            }
        }
        sort.push(max);
        bool maxTwice = false;
        while(!temp.empty())
        {
            if (temp.top() == max && maxTwice == false)
            {
                temp.pop();
                maxTwice = true;
            } else
            {
                s.push(temp.top());
                temp.pop();
            }
        }
    }

    while (!sort.empty())
    {
        cout << sort.top() << " ";
        sort.pop();
    }
    return 0;
}