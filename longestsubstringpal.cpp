#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % k == 0 && is_prime(i)) count++;
    }
    cout << count << endl;
    return 0;
}
