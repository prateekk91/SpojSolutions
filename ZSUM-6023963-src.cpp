# include<cstdio>
# include<algorithm>
# include<cmath>
using namespace std;

long long int power(long long int a,int b)
{
	if(b==1)
		return a;
		
	long long int temp = power(a,b/2)%10000007;
	if(b&1)
		return ((temp*temp)%10000007*a)%10000007;
	else
		return (temp*temp)%10000007;
}
	
int main()
{
	long long int n;
	int k;
	long long int ans;
	while(1)
	{
		scanf("%lld%d",&n,&k);
		if(n==0 && k==0)
			break;
//		printf("%lld %lld %lld %lld\n",power(n,k),power(n,n),power(n-1,k),power(n-1,n-1));
		ans = ( power(n,k) + power(n,n) + (2*(power(n-1,k)+power(n-1,n-1))) ) % 10000007;
		printf("%lld\n",ans);
	}
	return 0;
}