# include<cstdio>
# include<cmath>
# include<algorithm>
using namespace std;
int main()
{
	int n;
	int in[1010][2];
	int out[1010][2];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&in[i][0],&in[i][1]);
	}
	out[0][0]=in[0][0];
	out[0][1]=in[0][1];
	
	for(i=1;i<n;i++)
	{
		out[i][0]=max( (in[i][0]+abs(in[i][1]-in[i-1][0])+out[i-1][1]),(in[i][0]+abs(in[i][1]-in[i-1][1])+out[i-1][0]) );
		out[i][1]=max( (in[i][1]+abs(in[i][0]-in[i-1][0])+out[i-1][1]),(in[i][1]+abs(in[i][0]-in[i-1][1])+out[i-1][0]) );
//		printf("%d %d\n",out[i][0],out[i][1]);
	}
	printf("%d\n",max(out[i-1][0],out[i-1][1]));
	return 0;
}