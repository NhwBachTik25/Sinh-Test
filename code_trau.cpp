#include <iostream>
#include <algorithm>  
#include <utility>    
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
int a,b,l,r,m,kq=0;

void in()
{
    fast;
    freopen("code.inp","r",stdin);
    freopen("code.ans","r",stdout);
    cin >> l >> r >> a >> b;
}

void out()
{
    fu(i,l,r) if(i%a==0||i%b==0) kq++; 
    cout << kq;
}

Qnhu
{
    in(),out();
    return 0;
}