#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct Game{
	string id;
	string hero;
	char result;
};

bool cmp(Game a, Game b){
	int na=a.id.length(), nb=b.id.length(), check;
	if (na>nb) check=1;
	if (na<nb) check=0;
	if (check==1) {
		int t=na-nb;
		for (int i=0; i<t; i++){
			b.id = '0' + b.id;
		}
	}
	else {
		int t=nb-na;
		for (int i=0; i<t; i++){
			a.id = '0' + a.id;
		}
	}
	return a.id < b.id;
}

main() {
	int n;
	cin>>n;
	Game game[100000];
	for (int i=0; i<n; i++){
		cin>>game[i].id>>game[i].hero>>game[i].result;
	}
	sort(game, game + n, cmp);
	for (int i=0; i<n; i++){
		if (game[i].hero=="AM" && game[i].result=='W'){
			cout<<game[i].id;
			break;
		}
//		cout<<game[i].id<<" "<<game[i].hero<<" "<<game[i].result<<endl;
	}
} 
//http://www.spoj.com/PTIT/problems/P175PROG/
