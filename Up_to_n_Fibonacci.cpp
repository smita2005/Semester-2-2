#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, next, n;

    cout << "Enter the limit: ";
    cin >> n;

    cout << "Fibonacci: " << n1 << " " << n2 << " ";

    next = n1 + n2; // initialize before loop

    for (int i = 3; next <= n; i++) {
        cout << next << " ";
        n1 = n2;
        n2 = next;
        next = n1 + n2;
    }

    cout << endl;
    return 0;
}
