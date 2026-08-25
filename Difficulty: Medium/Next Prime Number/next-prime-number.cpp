bool isPrime(int x) {
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int nextPrime(int n) {

    // code here to find next prime number
    // return next prime number
    int x = n + 1;

    while (!isPrime(x)) {
        x++;
    }

    return x;
}