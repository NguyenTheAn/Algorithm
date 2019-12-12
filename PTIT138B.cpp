#include <iostream>
#include <algorithm>
#include <math.h>

#define LL long long
using namespace std;

struct Data{
	string f_name;  // father name
	string s_name;	// son name
	int age;		// tuoi khi sinh con
	int ageS;		// tuoi cua con
};

int n;
Data set[200];

void handled(string father, int ageF){
	for (int i=0; i<n; i++){
		if (set[i].f_name==father){
			if (father=="Ted"){
				set[i].ageS=100-set[i].age;
				handled(set[i].s_name, set[i].ageS);
			}
			else {
				set[i].ageS=ageF-set[i].age;
				handled(set[i].s_name, set[i].ageS);
			}
		}
	}
}

int cmp (Data a, Data b)
{
	if (a.ageS<b.ageS) return 0;
	else if (a.ageS==b.ageS)
	{
		if (a.s_name>b.s_name) return 0;
	}
	return 1;
}

int main (){
	int t;
	cin>>t;
	for (int k=0; k<t; k++){
		cin>>n;
		for (int i=0; i<n; i++){
			cin>>set[i].f_name>>set[i].s_name>>set[i].age;
		}
		handled("Ted", 0);
		sort(set, set+n, cmp);
		cout<<"DATASET "<<k+1<<endl;
		for (int j=0; j<n; j++){
			cout<<set[j].s_name<<" "<<set[j].ageS<<endl;
		}
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/PTIT138B/
