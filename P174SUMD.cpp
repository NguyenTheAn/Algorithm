#include <iostream>
using namespace std;
main()
{
	int x, y, tmp[]={7,6,5,4,3,2,1}, m[]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> x >> y;
	int idx = ( m[x-1] - tmp[y-1] ) / 7;
	if (( m[x-1] - tmp[y-1] ) % 7 == 0 ) cout << idx + 1;
	else cout << idx + 2; 
}
//http://www.spoj.com/PTIT/problems/P174SUMD/
