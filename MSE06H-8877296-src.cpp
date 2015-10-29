# include<cstdio>
# include<cmath>
# include<algorithm>
# include<vector>
using namespace std;
int tree[1010];
int m,n,k;
int x;
struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        if(left.first>right.first)
			return true;
		if(left.first==right.first)
		{
			if(left.second>right.second)
				return true;
			else
				return false;
		}
		return false;
    }
};

inline void update(int j,int val)
{
	while(j<=x)
	{
//		printf("j=%d val=%d\n",j,val);
		tree[j]+=val;
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
int main()
{
	pair<int,int> p;
	int a,b,loop;
	long long int c=0;
	vector<pair<int,int> > v;
	int i,j;
	int t;
	scanf("%d",&t);
	for(loop=1;loop<=t;loop++)
	{
		v.clear();
		c=0;
		scanf("%d%d%d",&n,&m,&k);
		x = max(m,n);
		for(i=0;i<=1000;i++)
			tree[i]=0;
		for(i=0;i<k;i++)
		{
			scanf("%d%d",&a,&b);
			p.first=a;
			p.second=b;
			v.push_back(p);
		}
		sort(v.begin(), v.end(), sort_pred());
//		for(i=0;i<k;i++)
//			printf("%d %d\n",v[i].first,v[i].second);
		for(i=0;i<k;i++)
		{
			int a = v[i].first;
			int b = v[i].second;
//			for(j=1;j<=5;j++)
//				printf("%d ",tree[j]);
//			printf("a=%d b=%d\n",a,b);
//			printf("\n");
			c += (read(b-1));
			update(v[i].second,1);
//			printf("c=%lld\n",c);
		}
		printf("Test case %d: %lld\n",loop,c);
	}
	return 0;
}
	