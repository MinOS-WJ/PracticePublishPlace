/********* Begin ********/
#include <iostream>
#include "Int.h"
using namespace std;

int main() {
    int a_val, b_val;
    cin >> a_val >> b_val;
    Int a(a_val), b(b_val);

    // 检查 <
    if (a < b) 
        cout << "a is less than b." << endl;
    else 
        cout << "a is not less than b." << endl;

    // 检查 <=
    if (a <= b) 
        cout << "a is less than or equal to b." << endl;
    else 
        cout << "a is not less than or equal to b." << endl;

    // 检查 >
    if (a > b) 
        cout << "a is greater than b." << endl;
    else 
        cout << "a is not greater than b." << endl;

    // 检查 >=
    if (a >= b) 
        cout << "a is greater than or equal to b." << endl;
    else 
        cout << "a is not greater than or equal to b." << endl;

    // 检查 ==
    if (a == b) 
        cout << "a is equal to b." << endl;
    else 
        cout << "a is not equal to b." << endl;

    // 检查 !=
    if (a != b) 
        cout << "a is not equal to b." << endl;
    else 
        cout << "a is not not equal to b." << endl;

    return 0;
}


/******** End **********/
