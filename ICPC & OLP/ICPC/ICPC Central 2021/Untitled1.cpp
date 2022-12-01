#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
    double x[2];
    double y[2];
    double z[2];
    double r, p;
    for (int i = 0; i < 2; i++ ){
        cin >> x[i];
    }
    for (int i = 0; i < 2; i++ ){
        cin >> y[i];
    }
    for (int i = 0; i < 2; i++ ){
        cin >> z[i];
    }
    cin >> r >> p;
    double t = 0;
    for (int i = 0; i < 2; i++ ){
        t += (x[i] - y[i]) * (x[i] - y[i]);
    }
    t = sqrt(t);
    cout << t << '\n';
    double k = asin(t / 2 / r);
    cout << k / 3.14159265 << '\n';
    double S = (- sin(2 * k) / 2 + k) / 3.14159265;
    cout << S << '\n';
    if (abs(S - (p / 100)) <= 0.05) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);    
    int t;
    t = 1;
//    cin >> t;
    for (int i = 0; i < t; i++) {
        run_case();
    }
    return 0;    
}