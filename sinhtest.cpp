#include <bits/stdc++.h>
#define int long long
#define fu(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define Qnhu signed main()
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ii pair<int,int>
#define fi first
#define se second
#define rand rd 

using namespace std;
const string NAME = "code";
const int NTEST = 100;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());

long long Rand(long long L, int R) 
{
    return L + rd() % (R - L + 1);
}

void Maketest()
{
    ofstream cout(NAME+".inp");
    int l = Rand(1,1e18), r = l+1e6, a= Rand(1,1e6), b = Rand(1,1e6);
    cout << l << ' ' << r << ' ' << a << ' ' << b;
}

Qnhu
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        Maketest();
        system((NAME + ".exe").c_str());
        system((NAME + "_trau.exe").c_str());
        if (system(("fc "+ NAME+ ".out " + NAME + ".ans").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}
