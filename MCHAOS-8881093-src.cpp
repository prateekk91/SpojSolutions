# include<iostream>
# include<vector>
# include<cstring>
# include<cstdio>
# include<cmath>
# include<algorithm>
# include<string>
# include<map>
using namespace std;
int tree[100010];
int n,k;
char a[100010][11],b[100010][11];
struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
	return left.first>right.first;
	}
};

inline void update(int j)
{
	while(j<=n)
	{
//		printf("j=%d val=%d\n",j,val);
		tree[j]+=1;
		j += (j&-j);
	}
}
inline int read(int j)
{
	int count=0;
	while(j)
	{
		count+=tree[j];
		j -= (j&-j);
	}
	return count;
}
bool cmp1(int x,int y)
{
	return strcmp(a[x],a[y])>0?1:0;
}

bool cmp2(int x,int y)
{
	return strcmp(b[x],b[y])>0?1:0;
}
inline void read(char *str)
{
register char c=0;
register int i = 0,j=0;
while (c < 33)
c = getchar_unlocked();
while (c > 65)
{
str[i] = c;
c = getchar_unlocked();
i = i + 1;
}
 
str[i] = '\0';
for(i=i-1,j=0;i>=0;i--,j++)
	b[k][j] = str[i];
b[k][j]=0;
k++;
}
int main()
{
	int i,j,idx;
	int x1[100010],x2[100010];
	pair<int,int> p[100010];
	long long int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		read(a[i]);
		x1[i]=i;
		x2[i]=i;
	}
	sort(x1,x1+n,cmp1);
	sort(x2,x2+n,cmp2);
/*	for(i=0;i<n;i++)
	{
		printf("%d %d\n",x1[i],x2[i]);
	}
*/	for(i=0;i<n;i++)
	{
		p[x1[i]].first = i+1;
		p[x2[i]].second = i+1;
		
	}
/*	for(i=0;i<n;i++)
	{
		printf("%d %d\n",p[i].first,p[i].second);
	}
*/	
	sort(p,p+n, sort_pred());
	for(i=0;i<n;i++)
	{
		idx = p[i].second;
		count += (read(idx-1));
		update(idx);
	}
	
	printf("%lld\n",count);
	return 0;
}