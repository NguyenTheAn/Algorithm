#include <iostream>
#include <algorithm>

using namespace std;

struct Sub{
	int subTimes;
	int time;
};

struct Doithi{
	string name;
	Sub answer[4];
	int punish;
	int result;
};

struct Max{
	string Mname;
	int Mresult;
	int Mpunish;
};

int main(){
	int n;
	cin>>n;
	Doithi *teams;
	teams = new Doithi[n+1];
	for (int i=0; i<n; i++){
		cin>>teams[i].name;
		teams[i].punish=0;
		teams[i].result=0;
		for (int j=0; j<4; j++){
			cin>>teams[i].answer[j].subTimes>>teams[i].answer[j].time;
			if (teams[i].answer[j].time!=0){
				teams[i].punish += (teams[i].answer[j].subTimes-1)*20 + teams[i].answer[j].time;
				teams[i].result++;		
			}
		}
	}
	Max max;
	max.Mname = teams[0].name;
	max.Mresult = teams[0].result;
	max.Mpunish = teams[0].punish;
	for (int i=1; i<n; i++){
		if (teams[i].result>max.Mresult){
			max.Mname = teams[i].name;
			max.Mresult = teams[i].result;
			max.Mpunish = teams[i].punish;
		}
		else 
			if (teams[i].result==max.Mresult){
				if (teams[i].punish<max.Mpunish){
					max.Mname = teams[i].name;
					max.Mresult = teams[i].result;
					max.Mpunish = teams[i].punish;
				}
			}
	}
	cout<<max.Mname<<" "<<max.Mresult<<" "<<max.Mpunish;
	delete [] teams;
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCTHIDAU/
