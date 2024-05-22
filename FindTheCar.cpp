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
#define vi vector <ll>
#define loop(i,n) for(int i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t; cin >> t;
    while(t--){
        ll n,k,q,x; cin>>n>>k>>q; vi a(k+1),b(k+1);loop(i,k) cin>>a[i+1];loop(i,k) cin>>b[i+1];
        while(q--){
            cin>>x ; 
            if(x==n){
                cout<<b[k]<<" " ; 
            }
            else if(x==0){
                cout<<0<<" " ;
            }
            else {
                ll pos = upper_bound(a.begin() , a.end() , x)-a.begin()-1 ; 
                cout<< b[pos]+((x-a[pos])*(b[pos+1]-b[pos]))/(a[pos+1]-a[pos])<<" ";
            }
        }
        cout<<endl ; 
    }
    return 0; 
}