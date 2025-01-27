#include <iostream>.
using namespace std;

int main() {
    int a, b, x;

    cout << "Enter First Variable: ";
    cin >> a;
    cout << "Enter Second Variable: ";
    cin >> b;

    x = a;
    a = b;
    b = x;

    cout << "Variables Swapped:" << endl;
    cout << "First Variable = " << a << endl;
    cout << "Second Variable = " << b << endl;

    return 0;
}
