#include <bits/stdc++.h> 
int modularExponentiation(int m, int n, int mod) {
	long long result = 1;
    long long base = m;
    long long power = n;
    while (power > 0) {
        if (power & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        power = power/2;
    }
    return result;
}
