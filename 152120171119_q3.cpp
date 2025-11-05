#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool checkPali(string s) {
    stack<char> s1;
    stack<char> s2;
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        s1.push(s[i]);
    }
    
    int half = (n % 2 != 0) ? (n / 2) + 1 : (n / 2);
    
    for (int i = n - 1; i >= half; i--) {
        s2.push(s[i]);
    }

    while (!s1.empty() && !s2.empty()) {
        if (s1.top() != s2.top()) {
            return false;
        }
        s1.pop();
        s2.pop();
    }

    return true;
}

int main() {
    string inp;
    cout << "Enter a word or sentence: ";
    getline(cin, inp);

    if (checkPali(inp)) {
        cout << "'" << inp << "' is a palindrome." << endl;
    } else {
        cout << "'" << inp << "' is not a palindrome." << endl;
    }

    return 0;
}