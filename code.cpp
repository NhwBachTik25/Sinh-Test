#include <iostream>
#include <algorithm>  // for __gcd
#include <utility>    // for pair
#define int long long
#define fu(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define Qnhu signed main()
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ii pair<int,int>
#define fi first
#define se second

using namespace std;
const int N=1e6+5;
int a,b,l,r,m,kq;

void in()
{
    fast;
    freopen("code.inp","r",stdin);
    freopen("code.out","r",stdout);
    cin >> l >> r >> a >> b;
}

int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}

void bcnn()
{
    m = a/gcd(a,b)*b;
}

void out()
{
    bcnn();
    kq = (r/a - l/a) + (r/b - l/b) - (r/m-l/m);
    if(l%a==0) kq++;
    if(l%b==0) kq++;
    cout << kq;
}

Qnhu
{
    in(),out();
    return 0;
}
