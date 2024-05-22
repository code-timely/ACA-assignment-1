#include <bits/stdc++.h>

int NthRoot(int n, int m) {
       int l=0,r=m;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(pow(mid,n)==m)return mid;
            if(pow(mid,n)>m) r=mid-1;
            else l=mid+1;
        }
        return -1;
}
