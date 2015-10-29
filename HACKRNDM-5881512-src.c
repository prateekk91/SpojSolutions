# include<stdio.h>


void quickSort(int arr[], int left, int right) {

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];

 

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

int binary(int a[],int key,int l,int r)
{
	int i;
	int mid=(l+r)/2;
//	printf("key=%d mid=%d l=%d r=%d a[mid]=%d\n",key,mid,l,r,a[mid]);
	while(l!=mid && r!=mid)
	{
		if(key==a[mid])
			return 1;
		if(key<a[mid])
			r=mid;
		else
			l=mid;
		mid=(l+r)/2;
	}
	return 0;
}			

int main()
{
	int n,k;
	int i,j;
	int a[1000000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	quickSort(a,0,n-1);
	
	int count=0; 
	for(i=0;i<n;i++)
	{
		 
		if((a[i]+k)<=a[n-1])
		{
			if(binary(a,a[i]+k,i,n))
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
	

