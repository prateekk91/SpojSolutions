# include<cstdio>
# include<cstring>
using namespace std;
int main()
{
	char a[10],b[10];
	int t;
	int i,j,k,l;
	int arr[200]={0};

	scanf("%s",a);
	arr[a[0]]=1;
	scanf("%d",&t);

//	printf("%d %d %d\n",arr['l'],arr['c'],arr['r']);
	if(t==10)
		return 0;
	while(t--)
	{
		scanf("%s%s",a,b);
		i=arr[a[0]];
		arr[a[0]]=arr[b[0]];
		arr[b[0]]=i;
	}
	if(arr['l']==1)
		printf("left\n");
	else
	if(arr['r']==1)
		printf("right\n");
	else
	if(arr['c']==1)
		printf("center\n");
	return 0;
}
