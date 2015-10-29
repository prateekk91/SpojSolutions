# include<cstdio>
# include<cmath>
# include<map>
# include<algorithm>
# include<string>
using namespace std;

int n;
int c[200003];



long long int merge(int a[], int low, int high, int mid)

{
	

	  int i, j, k;
	  long long int invcount=0;

	  i=low;

	  j=mid+1;

	  k=low;

	  while((i<=mid)&&(j<=high))

	  {

	  	  if(a[i]<a[j])

	  	  {

			c[k]=a[i];

			k++;

			i++;

	  	   }

	  	  else

	  	   {

			c[k]=a[j];

			k++;

			j++;
			invcount += mid-i+1;
			//printf("%d %d %d\n",i,mid,invcount);

	  	   }

	}

	   

	 while(i<=mid)

    	{

		c[k]=a[i];

		k++;

		i++;
        }

	while(j<=high)

	{

		c[k]=a[j];

		k++;

		j++;

	}

	for(i=low;i<k;i++)

	{

		a[i]=c[i];

	}

	return invcount;

} 




long long int mergesort(int a[], int low, int high)

{

	int mid;
	long long int invcount=0;
	

	if(low<high)

	{

		mid=(low+high)/2;

		invcount=mergesort(a,low,mid);

		invcount+=mergesort(a,mid+1,high);

		invcount+=merge(a,low,high,mid);

	}

	return invcount;

}






int main()
{
	map<string,int> a,b,c;
	int i,j,t;
	int arr[100000];
	long long int count=0;
	char w[30];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",w);
			a[w]=i;
		}
		for(i=0;i<n;i++)
		{
			scanf("%s",w);
			arr[i] = a[w];
		}
		count=mergesort(arr,0,n-1);
		printf("%lld\n",count);
	}
	return 0;
}