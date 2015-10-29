# include<stdio.h>
# include<math.h>
# include<string.h>

struct queue
{
	int front,rear;
	int data[2010];
}q;

void pushq(int a)
{
	q.data[++q.rear] = a;
}

int popq()
{
	return q.data[++q.front];
}

int notempty()
{
	if(q.front==q.rear)
		return 0;
	else
		return 1;
}


int main()
{
	int i,j,k,l,t,n,e,root,flag;
	char gr[2010][2010];
	char visited[2010];
	char sp[2010];
	int spec;
	scanf("%d",&t);
	for(l=1;l<=t;l++)
	{
		
		flag=0;q.rear=q.front=-1,spec=0;
		scanf("%d%d",&n,&e);
		
		for(i=0;i<=n;i++)
		{
			visited[i]=0;
			sp[i]=5;
			for(j=0;j<=n;j++)
				gr[i][j]=0;
		}
//		memset(gr,0,(n+1)*(n+1));
//		memset(visited,0,(n+1)*sizeof(int));
//		memset(sp,5,(n+1)*sizeof(int));
		for(i=0;i<e;i++)
		{
			scanf("%d%d",&j,&k);
			gr[j][k]=1;
			gr[k][j]=1;
		}
		
		for(i=1;i<=n;i++)
		{
			if(!visited[i])
			{
	//			printf("i=%d\n",i);
				pushq(i);
				visited[i] = 1;
				sp[i] = 0;
				while(notempty())
				{
					root = popq();
					spec=sp[root];
					for(j=1;j<=n;j++)
					{
						if(gr[root][j])
						{
							if(!visited[j])
							{
								visited[j]=1;
								pushq(j);
								sp[j]=!spec;
							}
							else
							{
								if(sp[j]==sp[root])
								{
//									printf("j=%d root=%d sp[j]=%d\n",j,root,sp[j]);
									flag=1;
									break;
								}
							}
						}
					}
					if(flag==1)
						break;
				}
			}
			if(flag==1)
				break;
		}
		printf("Scenario #%d:\n",l);
		if(flag==0)
			printf("No suspicious bugs found!\n");
		else
			printf("Suspicious bugs found!\n");
	}
	return 0;
}
	
	



