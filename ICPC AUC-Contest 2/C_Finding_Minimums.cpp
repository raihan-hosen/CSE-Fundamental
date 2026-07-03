#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int min_val = 1e9 + 7; 
    int counter = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x < min_val) {
            min_val = x;
        }

        counter++;

        if (counter == k || i == n) {
            cout << min_val << " ";
            
            min_val = 1e9 + 7;
            counter = 0;
        }
    }

    return 0;
}