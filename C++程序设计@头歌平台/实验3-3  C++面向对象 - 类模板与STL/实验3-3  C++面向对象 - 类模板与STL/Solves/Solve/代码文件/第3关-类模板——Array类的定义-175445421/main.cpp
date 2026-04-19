#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string id;
    string name;
    int score;

public:
    Student() = default; // 默认构造函数
    Student(string i, string n, int s) : id(i), name(n), score(s) {}
    bool operator>(const Student &other) const
    {
        return score > other.score;
    }
    friend istream &operator >>(istream &is,Student &s){
        is >> s.id >> s.name >> s.score;
        return is;
    }
    friend ostream &operator<<(ostream &os, const Student &s)
    {
        os <<s.id<<" "<<s.name<<" "<<s.score;
        return os;
    }
};

template <typename T>
class Array{
    private:
    T* data;
    int size;
    public:
    Array(int n):size(n){
        data = new T[size];
    }
    ~Array(){
        delete[] data;
    }
    void read(){
        for (int i = 0; i < size;i++){
            std::cin >> data[i];
        }
    }
    T findmax(){
        T max=data[0];
        for (int i = 1; i < size; ++i)
                {
                    if (data[i] > max)
                    {
                        max = data[i];
                    }
                }
                return max;
    }
};

int main() {
    int n;
    cin >> n;
    Array<int> a(n);
    a.read();
    cout << a.findmax() << endl;
    int m;
    cin >> m;
    Array<double> doubleArr(m);
    doubleArr.read();
    cout << doubleArr.findmax() << endl;
    int k;
    cin >> k;
    Array<Student> studentArr(k);
    studentArr.read();
    cout << studentArr.findmax() << endl;

    return 0;
}