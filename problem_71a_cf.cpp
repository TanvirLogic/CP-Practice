#include <iostream>
#include <string>

using namespace std;

int main() {
    string w;

    if (!(cin >> w)) return 0;

    int len = w.length();

    if (len > 100) {
        return;
    }

    else if (len > 10) {
        cout << w[0] << len - 2 << w[len - 1] << endl;
    } else {
        cout << w << endl;
    }

    return 0;
}
