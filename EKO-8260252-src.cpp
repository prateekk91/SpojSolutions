# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int a[1000001];
int main()
{
	long long int i,j,n;
	long long int m,sum=0,s=0,t=0;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+= a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if( sum - (s+(n-i)*a[i]) <=m )
			break;
		s+=a[i];
	}
	long long int high=a[i],low=0;
	long long int mid = (high+low)/2;
		
	while( !((sum - (s+(n-i)*mid))>=m && (sum - (s+(n-i)*(mid+1)))<m))
	{
		if((sum - (s+(n-i)*mid))>=m)
			low = mid+1;
		else
			high = mid-1;
		mid = (high+low)/2;
	}
	/*
	for(j=a[i];j>=0;j--)
	{
		if( sum - (s+(n-i)*j) >=m)
			break;
	}
	*/
	printf("%lld\n",mid);
	
			
	return 0;
}