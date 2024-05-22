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
        ll n,k; cin>>n>>k;
        if(k<n && n%k==0) cout<<"1"<<endl;
        else if(k<n && n%k!=0) cout<<"2"<<endl;
        else if(k%n==0) cout<<k/n<<endl;
        else cout<<k/n+1<<endl;
    }
    return 0;
}