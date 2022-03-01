long long Gcd(long long A, long long B) {
    if (B == 0) return A;
    else return Gcd(B, A % B);
}
