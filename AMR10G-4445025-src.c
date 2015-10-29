# include<stdio.h>

void quickSort(int arr[],int left,int right);

int main()
 {
	
	int t,k,n,i,min=0,j;
	
	scanf("%d",&t);
	while(t--)
	{	
		min=1000000001;
		scanf("%d%d",&n,&k);
		int height[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&height[i]);
		}
		
		quickSort(height,0,n-1);
		
		for(i=0;(i+k)<=n;i++)
		{
			j=height[(i+k-1)]-height[i];
			if(j<min)
			min=j;
		}
	
		printf("%d\n",min);
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