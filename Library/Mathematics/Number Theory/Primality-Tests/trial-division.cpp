// Time Complexity : O(sqrt(n))
bool isPrime(int x) {
 // handles undefined range & 1
    if ((x <= 1)) {
        return false;
    }

    // trial division test
    for (int i = 2; (i * i) <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    // return true on passing tests
    return true;
}
