#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int nextPrime(int num) {
    do {
num++;
    } while (isPrime(num) == 0);
    return num;
}

void printFactors(int num) {
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; i++) {
if (num % i == 0) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n) == 1) {
cout << n << " is a prime number.\
";
        cout << "Next prime number is: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number.\
";
        printFactors(n);
}

    return 0;
}