#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double y1,y0,h,a,i,x;
	scanf("%lf",&a);
	y0=a;
	h=0.001;
	printf("x");
	printf("          y\n");
	for(i=1;i<=25000;i++){
		y1=y0+h*(-y0);
		x+=h;
		printf("%f",x);
		printf("   %f\n",y1);
		
		if(y0-y1<0.000001){
			break;}
		y0=y1;
	}
	
	
	printf("y=%f",y1);
	
	return 0;
}

