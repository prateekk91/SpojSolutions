# include<stdio.h>

void quickSort(int arr[], int left, int right);


int main()
{
	int i,t,n,friends,sum,j;
	
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{	
		sum=0;
		
		scanf("%d%d",&n,&friends);

		int stamps[friends];

		for(j=0;j<friends;j++)
		{
			scanf("%d",&stamps[j]);
		}

		quickSort(stamps,0,friends-1);
		
		
	

		for(j=friends-1;j>=0;j--)
		{
			sum+=stamps[j];
			if(sum>=n)
			break;
		}
		if(sum>=n)
			printf("Scenario #%d:\n%d\n",i,(friends-j));
		else
			printf("Scenario #%d:\nimpossible\n",i);
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
