# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	long long int arr[100];
	long long int a,b;
	long long int ans1=0,ans2=0;
	
	int i;
	for(i=0;i<100;i++)
	{
		arr[i]=pow(2,i);
	}
	
	scanf("%lld%lld",&a,&b);
	a--;
	long long int temp;
	i=0;
	while(1)
	{
		temp=((a+arr[i])/arr[i+1])*arr[i];
		i++;
		if(!temp)
			break;
		ans1+=temp;
	}
	i=0;
	while(1)
	{
		temp=((b+arr[i])/arr[i+1])*arr[i];
		i++;
		if(!temp)
			break;
		ans2+=temp;
	}
	printf("%lld\n",ans2-ans1);
	return 0;
}