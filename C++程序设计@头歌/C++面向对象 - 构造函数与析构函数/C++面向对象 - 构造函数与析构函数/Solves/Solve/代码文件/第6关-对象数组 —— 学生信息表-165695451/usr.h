//本关卡对应文件夹为step7。
//完成该头文件，定义所需的类与函数
/********* Begin *********/


#include <string>
#include <iostream>
using namespace std;

class Student {
public:
    int sid;
    string name;
    float score;

    // 默认构造函数
    Student() : sid(0), name(""), score(0.0f) {}

    // 带参构造函数
    Student(int s_id, string s_name, float s_score) {
        sid = s_id;
        name = s_name;
        score = s_score;
    }
};

Student* students[5]; // 使用指针数组来存储学生对象
int count = 0;

void Add(int sid, string name, float sco) {
    if (count < 5) {
        students[count] = new Student(sid, name, sco);
        count++;
    }
}

void PrintAll() {
    for (int i = 0; i < count; i++) {
        cout << students[i]->sid << " " << students[i]->name << " " << students[i]->score << endl;
    }
}

void Average() {
    if (count == 0) {
        cout << "平均成绩 0" << endl;
        return;
    }
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += students[i]->score;
    }
    float avg = sum / count;
    cout << "平均成绩 " << avg << endl;
}



/********* End *********/
