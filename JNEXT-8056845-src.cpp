# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int a[1000001];
int main()
{
	int t;
	int i,j,n,fl,min;
	scanf("%d",&t);
	while(t--)
	{
		fl=0;
		scanf("%d",&n);
		min=n-1;
		
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=n-2;i>=0;i--)
		{
		//	printf("%d   %d\n",a[i+1],a[min]);
			if(a[i]<a[i+1]){
				fl=1;
				break;
			}
		}
		for(j=n-1;j>i;j--)
		{
			if(a[j]>a[i])
				break;
		}
		if(fl==0){
			printf("-1\n");
			continue;
		}
		else
		{
			swap(a[i],a[j]);
			sort(a+i+1,a+n);
		}
		for(i=0;i<n;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
	
	