#include <iostream>
#include <cstdlib>   // for std::abs
using namespace std;

int main() {
    int a, b;
    cout << "Enter those 2 numbers: ";
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "HCF is undefined for (0, 0)." << endl;
        return 1;
    }

    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "The HCF is : " << a << endl;
    return 0;
}