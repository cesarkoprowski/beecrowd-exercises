#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int j = 60;
    while (j >= 0) {
        cout << "I=" << i;
        cout << " J=" << j << endl;
        i = i + 3;
        j = j - 5;
    }
    return 0;
}