#include <iostream>
using namespace std;
	struct vector{
		long x;
		long y;
		long z;
	};
void gan(vector &v, vector a, vector b ){
	v.x = b.x-a.x;
	v.y = b.y-a.y;
	v.z = b.z-a.z;
}
long tich_hon_tap(vector v1, vector v2, vector v3){
	vector v;
	v.x=v1.y*v2.z-v1.z*v2.y;
	v.y=v1.z*v2.x-v1.x*v2.z;
	v.z=v1.x*v2.y-v1.y*v2.x;
	return (v.x*v3.x + v.y*v3.y + v.z*v3.z);	
}

int main()
{
	vector a,b,c,d;
	cin>>a.x>>a.y>>a.z;
	cin>>b.x>>b.y>>b.z;
	cin>>c.x>>c.y>>c.z;
	cin>>d.x>>d.y>>d.z;
	vector v1, v2, v3, v4, v5;
	gan(v1, a, b);
	gan(v2, a, c);
	gan(v3, a, d);
	gan(v4, b, c);
	gan(v5, c, d);
	if (tich_hon_tap(v1, v2, v4) == 0 && tich_hon_tap(v1, v3, v5)==0) cout<<"Win";
	else cout<<"Yasuo AFK";
}


