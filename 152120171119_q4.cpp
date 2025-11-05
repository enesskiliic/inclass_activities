#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool checkParen(string e) {
    stack<char> s;
    
    for (char c : e) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false;
            }

            char top = s.top();
            s.pop();

            if (c == ')' && top != '(') {
                return false;
            }
            if (c == '}' && top != '{') {
                return false;
            }
            if (c == ']' && top != '[') {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string e1 = "((a + b) * [c - d]) / {e}";
    string e2 = "([a + b)]";
    string e3 = "a + b}";
    string e4 = "{[a + b]";
    string e5 = "";

    cout << "Expression 1: " << e1 << " -> " << (checkParen(e1) ? "Balanced" : "Unbalanced") << endl;
    cout << "Expression 2: " << e2 << " -> " << (checkParen(e2) ? "Balanced" : "Unbalanced") << endl;
    cout << "Expression 3: " << e3 << " -> " << (checkParen(e3) ? "Balanced" : "Unbalanced") << endl;
    cout << "Expression 4: " << e4 << " -> " << (checkParen(e4) ? "Balanced" : "Unbalanced") << endl;
    cout << "Expression 5 (Empty): " << e5 << " -> " << (checkParen(e5) ? "Balanced" : "Unbalanced") << endl;

    return 0;
}