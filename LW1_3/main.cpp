#include <iostream>

/* Найти наибольший общий делитель чисел M и N, используя теорему Эйлера: если M делится на N, то НОД (N,M) = N, иначе НОД (N,M) = (M%N, N). */

inline bool doesDivide(int a, int b) {
    if (a % b == 0) return true;
    return false;
}

int non_recursive(int n, int m) {

    while (!doesDivide(m, n)) {
        m = m % n;
        std::swap(m, n);
    }
    return n;

}

int recursive(int n, int m) {

    if (doesDivide(m, n)) return n;
    return recursive(m%n, n);

}

int main() {

    int f = 9999, s = 17;
    std::cout << non_recursive(f, s) << " " << recursive(f,s ) << std::endl;
    return 0;

}
