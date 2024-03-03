#include <iostream>
#include <istream>
using namespace std;
int main() {
    int cnt = 1;
    while (cin.get() == '\n') {
        system("CLS");
        cout << cnt++ << endl;
    }
};