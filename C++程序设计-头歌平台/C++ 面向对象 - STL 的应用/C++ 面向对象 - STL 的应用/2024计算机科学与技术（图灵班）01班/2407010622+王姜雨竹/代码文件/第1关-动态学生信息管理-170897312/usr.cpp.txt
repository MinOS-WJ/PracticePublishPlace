#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    vector<Student> students;
    char cmd;

    while (cin >> cmd) {
        if (cmd == 'A') {
            string name;
            int score;
            cin >> name >> score;
            auto it = find_if(students.begin(), students.end(), [&name](const Student& s) {
                return s.name == name;
            });
            if (it != students.end()) {
                it->score = score;
            } else {
                students.push_back({name, score});
            }
        } else if (cmd == 'R') {
            string name;
            cin >> name;
            students.erase(remove_if(students.begin(), students.end(),
                [&name](const Student& s) { return s.name == name; }), students.end());
        } else if (cmd == 'P') {
            if (students.empty()) {
                cout << "[空]" << endl;  // 关键修改点
            } else {
                for (const auto& s : students) {
                    cout << s.name << " " << s.score << endl;
                }
            }
        } else if (cmd == 'S') {
            sort(students.begin(), students.end(),
                [](const Student& a, const Student& b) { return a.score > b.score; });
        }
    }
    return 0;
}