#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r, c;
	cin>>r>>c;
	int a[100][100], d=0, count=1, hang=r-1, cot=c-1;
	while(1){
		for (int i=d; i<=cot; i++){
			a[d][i]=count;
			count++;
		}
		if (count==r*c+1) break;
		for (int i=d+1; i<=hang; i++){
			a[i][cot]=count;
			count++;
		}
		cot--;
		if (count==r*c+1) break;
		for (int i=cot; i>=d; i--){
			a[hang][i]=count;
			count++;
		}
		hang--;
		if (count==r*c+1) break;
		for (int i=hang; i>=d+1; i--){
			a[i][d]=count;
			count++;
		}
		d++;
		if (count==r*c+1) break;
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}

