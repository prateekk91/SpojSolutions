# include<cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
# define MAXn 100010
using namespace std;


int n, m;

int t[3*MAXn];
bool v[3*MAXn];

inline int get (int x, int &l, int &r)
{
	return v[x] ? (r-l)-t[x] : t[x];
}

void update (int x, int l, int r, int &s, int &e)
{
	if (e <= l || r <= s)
		return;
	if (s <= l && r <= e)
	{
		v[x] ^= true;
		return;
	}
	v[2*x] ^= v[x];
	v[2*x+1] ^= v[x];
	v[x] = false;
	int mid = (l + r) / 2;
	update (2*x, l, mid, s, e);
	update (2*x+1, mid, r, s, e);
	t[x] = get (2*x, l, mid) + get (2*x+1, mid, r);

}

int query (int x, int l, int r, int &s, int &e)
{
	if (e <= l || r <= s)
		return 0;
	if (s <= l && r <= e)
	{
		return get (x, l, r);
	}
	v[2*x] ^= v[x];
	v[2*x+1] ^= v[x];
	v[x] = false;
	int mid = (l + r) / 2;
	t[x] = get (2*x, l, mid) + get (2*x+1, mid, r);
	return query (2*x, l, mid, s, e) + query (2*x+1, mid, r, s, e);
}

int main()
{
	scanf("%d%d",&n,&m);
	while (m--)
	{
		int op, s, e;
		scanf("%d%d%d",&op,&s,&e);
		s--;
		if (op == 0)
			update (1, 0, n, s, e);
		else
			printf("%d\n",query (1, 0, n, s, e));
	}
	
}