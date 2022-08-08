#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007 // 10^9+7
ll fact[100005];

ll bigmod(ll b,ll e)
{
    if(e==0)return 1;
    ll ans=bigmod(b,e/2);
    ans=(ans*ans)%mod;
    if(e%2==1)ans=(ans*b)%mod;
    return ans;
}

ll inverse_mod(ll val){
    return bigmod(val,mod-2);
}

void fact_cal()
{
    fact[0]=1;
    for(int i=1;i<=100000;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }

}

ll nCr(int N,int r)
{
    if(N<r)return 0;
    ll res=fact[N];
    res=(res*inverse_mod(fact[r]))%mod;
    res=(res*inverse_mod(fact[N-r]))%mod;
    return res;
}

int main(){
	fact_cal();
	int n,r;
	scanf("%d%d",&n,&r);
	printf("%lld\n",nCr(n,r));
	return 0;
}