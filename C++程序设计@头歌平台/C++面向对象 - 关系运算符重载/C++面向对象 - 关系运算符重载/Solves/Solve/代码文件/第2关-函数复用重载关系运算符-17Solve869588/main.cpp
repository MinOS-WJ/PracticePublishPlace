/********* Begin ********/
#include "Int.h"
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    Int a(x), b(y);

    if (a < b) cout << "a is less than b." << endl;
    else cout << "a is not less than b." << endl;

    if (a <= b) cout << "a is less than or equal to b." << endl;
    else cout << "a is not less than or equal to b." << endl;

    if (a > b) cout << "a is greater than b." << endl;
    else cout << "a is not greater than b." << endl;

    if (a >= b) cout << "a is greater than or equal to b." << endl;
    else cout << "a is not greater than or equal to b." << endl;

    if (a == b) cout << "a is equal to b." << endl;
    else cout << "a is not equal to b." << endl;

    if (a != b) cout << "a is not equal to b." << endl;
    else cout << "a is not not equal to b." << endl;

    return 0;
}


/******** End **********/
