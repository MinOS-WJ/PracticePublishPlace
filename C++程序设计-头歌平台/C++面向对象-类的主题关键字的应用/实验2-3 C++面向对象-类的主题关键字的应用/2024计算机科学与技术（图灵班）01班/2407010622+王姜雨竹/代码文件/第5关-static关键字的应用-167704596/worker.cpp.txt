#include "worker.h"

int Worker::totalAge = 0;
int Worker::totalSalary = 0;
int Worker::count = 0;

intArray globalArray;

intArray::intArray() : data(nullptr), length(0), capacity(0) {}

intArray::intArray(int initLength) : length(initLength), capacity(initLength) {
    data = new int[capacity];
    for (int i = 0; i < length; ++i) {
        data[i] = 0;
    }
}

intArray::intArray(const intArray& other) : length(other.length), capacity(other.capacity) {
    data = new int[capacity];
    for (int i = 0; i < length; ++i) {
        data[i] = other.data[i];
    }
}

intArray::~intArray() {
    delete[] data;
}

intArray& intArray::operator=(const intArray& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        capacity = other.capacity;
        data = new int[capacity];
        for (int i = 0; i < length; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

void intArray::resize(int newLength) {
    if (newLength == length) return;

    if (newLength > capacity) {
        capacity = newLength;
        int* newData = new int[capacity];
        for (int i = 0; i < length; ++i) {
            newData[i] = data[i];
        }
        for (int i = length; i < newLength; ++i) {
            newData[i] = 0;
        }
        delete[] data;
        data = newData;
    } else {
        for (int i = newLength; i < length; ++i) {
            data[i] = 0;
        }
    }
    length = newLength;
}

void intArray::input() {
    cout << "Enter array length: ";
    int len;
    cin >> len;
    resize(len);
    cout << "Enter " << len << " integers: ";
    for (int i = 0; i < length; ++i) {
        cin >> data[i];
    }
}

void intArray::output() const {
    cout << "Array elements: ";
    for (int i = 0; i < length; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int intArray::getLength() const {
    return length;
}

int intArray::getCapacity() const {
    return capacity;
}

int& intArray::operator[](int index) {
    if (index < 0 || index >= length) {
        cout << "Index out of bounds" << endl;
        exit(1);
    }
    return data[index];
}

const int& intArray::operator[](int index) const {
    if (index < 0 || index >= length) {
        cout << "Index out of bounds" << endl;
        exit(1);
    }
    return data[index];
}

void Worker::inPut() {
    cin >> name >> age >> salary;
    totalAge += age;
    totalSalary += salary;
    count++;
}

double Worker::getAverageAge() {
    return count > 0 ? static_cast<double>(totalAge) / count : 0.0;
}

double Worker::getAverageSalary() {
    return count > 0 ? static_cast<double>(totalSalary) / count : 0.0;
}