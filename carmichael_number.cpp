#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
/*typedef long long ll;

using namespace std;
ll gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
ll power(ll a,ll b,ll m)
{
     a%=m;
    long long res =1;
    while(b>0)
    {
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
int main() {
    ll t;
    while(t--)
    {
        ll z,n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            z=0;
            if(gcd(n,i)==1)
            {
                int mod=n;
                int ans=power(i,n-1,mod);
                if(ans!=1)
                {
                    z++;
                    cout<<"false\n";
                    break;
                }
            }
        }
        if(z==0)
            cout<<"true\n";
        
    }

    return 0;
}*/
typedef long long ll;
using namespace std;

/*ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}*/
ll gcd(int a,int b)
{
    if(a<b)
        return gcd(b,a);
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

ll power(ll x, ll y, ll mod) {
    x %= mod;
    long long result = 1;
    while (y > 0) {
        if (y & 1)
            result = result * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return result;
}



int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            b=0;
            if(gcd(n,i)==1)
            {
                ll mod=n;
                ll ans=power(i,n-1,mod);
                if(ans!=1)
                {
                    b++;
                    cout<<"false\n";
                    break;
                }
                    
            }
        }
        if(b==0)
            cout<<"true\n";
        
    }
    
    return 0;
}
