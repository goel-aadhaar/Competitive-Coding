#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dx = x2 - x1;
        int dy = y2 - y1;

        int u1 = x1, v1 = y1;
        int u2 = u1 - dy, v2 = v1 + dx;

        cout << u1 << " " << v1 << " " << u2 << " " << v2 << endl;
    }

    return 0;
}
