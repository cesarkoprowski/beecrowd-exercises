#include <iostream>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    if (!x || !y) {
        if (x == 0 && y == 0) {
            cout << "Origem" << endl;
        } else if (!x) {
            cout << "Eixo Y" << endl;
        } else {
            cout << "Eixo X" << endl;
        }
    } else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    }
    return 0;
}