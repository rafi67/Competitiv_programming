#include <bits/stdc++.h>
#define mx 1000000
#define ll long long

using namespace std;

bool cross[mx+5];
int prime[mx+5];
int id = 1;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime[id++] = i;
        for(ll j=(ll)i*i; j<=mx; j+=i) cross[i] = true;
    }
}

int main() {

    sieve();

    for(int i=1; i<=mx; ++i) printf("%d ", prime[i]);
    printf("\n");

    return 0;

}