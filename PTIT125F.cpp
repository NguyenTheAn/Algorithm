#include <stdio.h>
#include <string.h>


int main() {
	int n;
	scanf("%d", &n);
	int upTime=0, downTime=0, upMin= 50001, downMin= 50001;
	for (int i=0; i<n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		upTime+=a;
		downTime+=b;
		if (a<upMin) upMin=a;
		if (b<downMin) downMin=b;
	}
	if (upTime+downMin>downTime+upMin) printf("%d", upTime+downMin);
	else printf("%d", downTime+upMin);
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT125F/
