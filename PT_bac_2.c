#include <stdio.h>
#include <math.h>

main()
{
	long long a,b,c;
	scanf("%lld %lld %lld",&a, &b,&c);
	if(a!=0) {
		long long delta= (b*b-4*a*c);
		if (delta<0) {
			printf("0");
			}
		else if (delta==0){
			double x= (-1.0*(double) b)/(2.0*(double) a);
			printf("1\n%.5lf",x);
		}
		else if ( delta>0){
			double x1=  (-1.0*(double) b +sqrt((double) delta))/(2.0*(double) a);
			double x2=  (-1.0*(double) b -sqrt((double) delta))/(2.0*(double) a);
			if (x1<=x2) printf("2\n%.5lf\n%.5lf",x1,x2);
				else  printf("2\n%.5lf\n%.5lf",x2,x1);
			}
	}
	else if (a==0) {
		if (b!=0){
			double x=  (-1.0*(double) c)/(double) b;
			printf("1\n%.5lf",x);
		}
		else if (c!=0) printf("0");
				else printf("-1");
	}
}
