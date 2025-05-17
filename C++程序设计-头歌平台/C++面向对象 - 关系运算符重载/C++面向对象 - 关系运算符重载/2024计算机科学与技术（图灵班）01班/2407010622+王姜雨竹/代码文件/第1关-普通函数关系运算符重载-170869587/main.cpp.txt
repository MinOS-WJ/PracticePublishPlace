/********* Begin ********/
#include "Int.h"
#include <iostream>

using namespace std;

int main() {
    int a_val, b_val;
    cin >> a_val >> b_val;
    Int a(a_val), b(b_val);
    if (a < b) {
        cout << "a is less than b." << endl;
    } else if (a == b) {
        cout << "a is equal to b." << endl;
    } else {
        cout << "a is greater than b." << endl;
    }
    return 0;
}


/******** End **********/
