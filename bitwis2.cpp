#include <bits/stdc++.h>
#define N 200005

using namespace std;

int ar[N];

int main() {

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &ar[i]);
    long long ans = 0;

    for(int bit=0; bit<30; bit++) {
        int present = 0;
        for(int i=1; i<=n; i++) {
            if((1<<bit)&ar[i]) present++;
        }
        ans+=(long long) present*(n-present)*(1<<bit);
        ans+=(long long) present*(present-1)*(1<<bit)/2;
    }

    printf("%lld\n", ans);

    return 0;

}