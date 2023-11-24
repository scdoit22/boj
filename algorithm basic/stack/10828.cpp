//스택 구현
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    while(n--) {
        string cmd;
        cin >> cmd;

        if(cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if(cmd == "pop") {
            cout << (s.empty() ? -1 : s.top()) << "\n";
            if(!s.empty()) {
                s.pop();
            }
        }
        else if(cmd == "empty") {
            cout << s.empty() << "\n";
        }
        else if(cmd == "size") {
            cout << s.size() << "\n";
        }
        else if (cmd == "top") {
            cout << (s.empty() ? -1 : s.top()) << "\n";
        }
    }
    return 0;
}