// Time Complexity : O(sqrt(n) / 2)
bool isPrime(int x) {
    // check for only even prime
    if (x == 2) {
        return true;
    }

    // pre-eliminates non prime candidates
    if ((x <= 1) || !(x & 1) {
        return false;
    }

    // trial division test
    for (int i = 3; (i * i) <= x; i += 2) {
        if (x % i == 0) {
            return false;
        }
    }

    // return true on passing tests
    return true;
}
