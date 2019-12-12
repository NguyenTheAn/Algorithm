#include<iostream>
using namespace std;

int main() {
   int n,a,b,dem=0;
   cin>>n>>a>>b;
   if (n==0 || a==n) cout<<"0";
   else {
	   if (a+b>=n) cout<<n-a;
	   else cout<<b+1;
   }
   return (0);
}
//http://www.spoj.com/ACMPTIT/problems/P184PROA/
