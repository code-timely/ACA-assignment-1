#include<iostream>
#include<algorithm>
#include <vector>
#include <string>

using namespace std;

#define tr(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define ll long long
#define f first
#define s second
#define vp(d1,d2) vector < pair < d1,d2 > >
#define all(container) container.begin(),container.end()
#define vi vector <int>
#define loop(i,n) for(int i=0;i<n;i++)

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s; ll n = s.size();
        ll c = 0; int f = 0;  ll l,r;
        loop(i,n)
        {
            if(s[i]=='0')
            {
                l = i;
                while(i<n&&s[i]=='0') i++;
                if(s[i]=='1')
                {
                    f = 1;
                    while(i+1<n&&s[i+1]=='1') i++;
                    r = i;
                }
            }
            if(f) break;
        } 
        //if(f) cout << l << " " << r << endl;
        char d;
        loop(i,n)
        {
            d=s[i];
            while(i<n&&s[i]==d) i++;
            i--;
            c++;
        }
        c--;
        if(f) c--;
        cout << c+1 << endl;
        // ll i = 0; ll c=0;
        // while(i<n&&s[i]=='0') i++;
        // while(i<n&&s[i]=='1') i++;
        // for(ll ind = i; ind < n;ind++)
        // {

        // }
    }
    return 0;
}