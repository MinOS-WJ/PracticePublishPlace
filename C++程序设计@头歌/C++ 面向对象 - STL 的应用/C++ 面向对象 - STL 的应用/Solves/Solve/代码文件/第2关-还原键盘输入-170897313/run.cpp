#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line)) {
        list<char> chars;
        auto cursor = chars.end();
        
        for (char c : line) {
            if (c == '<') {
                if (cursor != chars.begin()) {
                    --cursor;
                }
            } else if (c == '>') {
                if (cursor != chars.end()) {
                    ++cursor;
                }
            } else if (c == '[') {
                cursor = chars.begin();
            } else if (c == ']') {
                cursor = chars.end();
            } else {
                chars.insert(cursor, c);
            }
        }
        
        for (char c : chars) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}

