#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    cout << "add(2,3) == 5: " 
         << (add(2,3) == 5 ? "PASS" : "FAIL") << endl;
    cout << "add(-4,6) == 2: " 
         << (add(-4,6) == 2 ? "PASS" : "FAIL") << endl;
    cout << "multiply(2,3) == 6: " 
         << (multiply(2,3) == 6 ? "PASS" : "FAIL") << endl;
    cout << "multiply(-2,5) == -10: " 
         << (multiply(-2,5) == -10 ? "PASS" : "FAIL") << endl;
    cout << "multiply(7,0) == 0: " 
         << (multiply(7,0) == 0 ? "PASS" : "FAIL") << endl;

    return 0;
}
