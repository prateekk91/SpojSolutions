# include<stdio.h>

void quickSort(int arr[],int left,int right);

int main()
{
	int n;
	int a[1500];
	int i;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		quickSort(a,0,n-1);
		
		int c=0;
		if(a[n-1]<1322)
		{
			printf("IMPOSSIBLE\n");
			continue;
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i] > 200)
			{
				c++;
				break;
			}
		}
		if(c>0)
			printf("IMPOSSIBLE\n");
		else
			printf("POSSIBLE\n");
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