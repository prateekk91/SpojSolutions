# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
long long int search(long long int, long long int b[],long long int);

void quickSort(long long int arr[], long long int left, long long int right) {

      long long int i = left, j = right;

      long long int tmp;

      long long int pivot = arr[(left + right) / 2];

 

      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      }

 

      /* recursion */

      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

}

long long int ab(long long int a)
{
	return (a>0?a:(a*-1));
}

long long int search(long long int key,long long int arr[],long long int n2)
{
	
	long long int low,high,mid,minim=1000000;
	low=0;
	high=n2-1;
	mid = (low+high)/2;
	while(low!=high)
	{
		if(arr[mid]==key)
			break;
		else
		if(arr[mid]<key)
			low = mid+1;
		else
			high = mid-1;
		if(mid==low || mid==high)
			break;
		mid = (low+high)/2;
	}
//	printf("key=%lld mid=%lld\n",key,mid);
	if(mid!=0)
		minim = min(ab(key-arr[mid]),ab(key - arr[mid-1]));
	else
		minim = ab(key - arr[mid]);
//	printf("minimum=%lld\n",minim);
	if(mid!=n2-1)
		minim = min(minim,ab(key-arr[mid+1]));
	else
		minim = min(minim,ab(key-arr[mid]));
//	printf("minim=%lld\n",minim);
	return minim;
}
	

int main()
{
	long long int t,i,j,k,l;
	long long int n1,n2;
	long long int a[1001],b[1001];
	long long int minim;
	
	scanf("%lld",&t);
	while(t--)
	{
		minim=1000000;
		scanf("%lld",&n1);
		for(i=0;i<n1;i++)
			scanf("%lld",&a[i]);
		scanf("%lld",&n2);
		for(i=0;i<n2;i++)
			scanf("%lld",&b[i]);
		
		quickSort(b,0,n2-1);
		for(i=0;i<n1;i++)
		{
			minim = min(minim,search(a[i],b,n2));
		}

		printf("%lld\n",minim);
	}
	return 0;
}

