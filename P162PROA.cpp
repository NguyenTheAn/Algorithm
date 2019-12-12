#include <bits/stdc++.h>
using namespace std;

long long A,B,X;

double calc(long long x){
    double rs = cbrt(x)*A + sqrt(x)*B;
    return rs;
}
long long bsearch(long long l, long long  r, long long key){
    long long mid = (l+r)/2;
    double rs = calc(mid);
    if(calc(mid)<=key && calc(mid+1)>key) return mid;
    if(calc(mid)<=key) return bsearch(mid+1,r,key);
    return bsearch(l,mid-1,key);
}
int main(){
    cin>>A>>B>>X;
    long long ans=bsearch(1,1000000000000000000,X);
    if(calc(ans)==X) cout<<ans;
    else cout<<ans+1;
}

//https://www.spoj.com/PTIT/problems/P162PROA/
