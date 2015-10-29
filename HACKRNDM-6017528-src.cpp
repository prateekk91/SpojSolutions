# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n,k,i;
	long long int count=0;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	
	int low=0,high=n+1,mid;
	int key;
	for(i=0;i<n;i++)
	{
		key=arr[i]+k;
		
		low=i;
		high=n;
		mid=(low+high)/2;
		while(low!=mid && high!=mid)
		{
			mid=(high+low)/2;
//			printf("low=%d high=%d mid=%d key=%d\n",low,high,mid,key);
			if(arr[mid]==key)
			{
				mid=(high+low)/2;
//				printf("key=%d\n",key);
				count++;
				break;
			}
			else
			if(arr[mid]<key)
				low=mid+1;
			else
				high=mid-1;
			
		}
		
	}
	printf("%lld\n",count);
	return 0;
}