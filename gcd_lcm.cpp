#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    int gc = gcd(b, a%b);
    return gc;
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    cout << "Gcd of a and b is " << gcd(a, b) << "\n"
    << "Lcm of a and b is " << lcm(a, b) << "\n";

    return 0;

}