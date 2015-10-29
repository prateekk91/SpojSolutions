#include<stdio.h>
#include<math.h>
int main(){
	int T,sq;
	int a[1000001]={0};
	long long m,n,i,j;
	scanf("%d",&T);
	while(T--){
		scanf("%lld%lld",&m,&n);
		if(m==1) m++;
		if(m==2) printf("%lld\n",m);
		if(!(m&1)) m++;
		sq=(int)sqrt(n);
		for(j=3;j<=sq;j+=2){
			if(m%j==0) i=m/j;
			else i=m/j+1;
			if(i<2 ) i=2;
			for(;i<=n/j;i++)	a[(i*j)-m]=1;
		}
		for(i=0;i<=n-m;i+=2) if(!a[i]) printf("%lld\n",i+m,i);	else a[i]=0;
		printf("\n");
	}
	return 0;
}
