#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class intArray {
private:
    int* data;
    int length;
    int capacity;

public:
    intArray();
    intArray(int initLength);
    intArray(const intArray& other);
    ~intArray();
    intArray& operator=(const intArray& other);
    void resize(int newLength);
    void input();
    void output() const;
    int getLength() const;
    int getCapacity() const;
    int& operator[](int index);
    const int& operator[](int index) const;
};

class Worker {
private:
    string name;
    int age;
    int salary;
    static int totalAge;
    static int totalSalary;
    static int count;

public:
    void inPut();
    static double getAverageAge();
    static double getAverageSalary();
};

extern intArray globalArray;