#include <cstdio>
#include <algorithm>
using namespace std;
 
int B; // Budget
int N; // Number of Parties
int F[101]; // The amount of fun to be had at each party
int C[101]; // The cost to attend each party
int MAXFUN[101][501];
// Each element, MAXFUN[i][j] will be the maximum amount of fun 
// to be had considering all partys up to and including i and having
// a budget of j
 
 
void take_input()
{
	scanf("%d %d", &B, &N);
	for(int i = 1; i <= N; i++)
		scanf("%d %d", &C[i], &F[i]);
}
 
void fill_maxfun()
{
	for(int i = 0; i <= B; i++)
		MAXFUN[0][i] = 0;
	for(int i = 0; i <= N; i++)
		MAXFUN[i][0] = 0;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= C[i]; j++)
			MAXFUN[i][j] = max(MAXFUN[i-1][j],MAXFUN[i][j-1]);
		for(int j = C[i]; j <= B; j++)
			MAXFUN[i][j] = max(MAXFUN[i-1][j-C[i]]+F[i], max(MAXFUN[i-1][j],MAXFUN[i][j-1]));
	}
}
 
int get_mincost_for_maxfun()
{
	int idx = 0;
	while(MAXFUN[N][idx] != MAXFUN[N][B])
		idx++;
	return idx;
}
 
int main()
{
	while(true)
	{
		take_input();
		if(N == 0 && B == 0)
			break;
		fill_maxfun();
		printf("%d %d\n", get_mincost_for_maxfun(), MAXFUN[N][B]);
	}
}
