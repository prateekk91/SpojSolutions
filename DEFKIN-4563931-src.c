# include<stdio.h>

void quickSort(int arr[], int left, int right);

int max(a,b)
{
return (a>b?a:b);
}
int main()
{
	int i,t,w,h,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&w,&h,&n);
		long long int ans;
		if(n==0)
		ans=(w*h);
		else{
		int x[n],y[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		quickSort(x,0,n-1);
		quickSort(y,0,n-1);
		int diffx=max(x[0]-1,w-x[n-1])+1;
		int diffy=max(y[0]-1,h-y[n-1])+1;
		
		for(i=1;i<n;i++)
		{
			if((x[i]-x[i-1])>diffx)
				diffx=(x[i]-x[i-1]);
		}
		for(i=1;i<n;i++)
		{
			if((y[i]-y[i-1])>diffy)
				diffy=(y[i]-y[i-1]);
		}
		ans=(diffx-1)*(diffy-1);
		}
		printf("%lld\n",ans);
	}
return 0;
}

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
