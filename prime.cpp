#include <iostream>
using namespace std;

int main() {
    int n, i, j, flag;

    cout << "Enter limit: ";
    cin >> n;

    cout << "Prime numbers are:\n";

    for(i = 2; i <= n; i++) {
        flag = 0;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << i << " ";
    }

    return 0;
}
