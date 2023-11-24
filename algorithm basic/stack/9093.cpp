#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
using namespace std;

int main(void) 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin, str);
        str+= '\n';

        stack<char> s;

        for(char ch : str) {
            if(ch != ' ' && ch != '\n') {
                s.push(ch);
            }
            else {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
        }
    }
    return 0;
}