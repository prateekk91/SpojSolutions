# include<cstdio>
# include<cstring>
# include<algorithm>
using namespace std;
int main()
{
	int i,j,k;
	int sum,minim;
	char s1[2010],s2[2010];
	
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&k);
	
	int l1=strlen(s1);
	int l2=strlen(s2);
	int arr[2][2010];
	arr[0][0]=0;
	
	for(i=0;i<l2;i++)
	{
		arr[0][i+1]=k*(i+1);
	}
//	for(i=0;i<=l2;i++)
//		printf("%d ",arr[0][i]);
//	printf("\n");

	for(i=0;i<l1;i++)
	{

		
		arr[(i+1)&1][0]=k*(i+1);
		//printf("%d ",k*(i+1));
		
		for(j=0;j<l2;j++)
		{

			
			//printf("a=%d b=%d c=%d d=%d i=%d\n",arr[i&1][j]+(2*k),arr[i&1][j]+abs(s1[i]-s2[j]),arr[i&1][j+1]+k,arr[(i+1)&1][j]+k,i&1);
			
			arr[(i+1)&1][j+1]=min(arr[i&1][j]+(2*k),min(arr[i&1][j]+abs(s1[i]-s2[j]),min(arr[i&1][j+1]+k,arr[(i+1)&1][j]+k)));
			//printf("%d ",arr[(i+1)&1][j+1]);
		}
		//printf("\n");
	}
	
	printf("%d\n",arr[i&1][l2]);
	return 0;
}
