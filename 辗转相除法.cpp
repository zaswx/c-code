#include<stdio.h>
int main()
{
	int a,b,r=0;
	scanf("%d%d",&a,&b);
	while(r=a%b){
		a=b;
		b=r;
	}
	printf("%d\n",b);
	return 0;
}
