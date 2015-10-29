# include<stdio.h>
int main()
{
	
	char in[1000];
	char ch;
	int i,j;
	
	while(1)
	{
		char mat[1200][1200]={0};
		int x=1000,y=1000;
		mat[x][y]=1;
		scanf("%s",in);
		int count=0;
		if(strcmp(in,"Q")==0)
			break;
		for(i=0;in[i]!='Q';i++)
		{
			switch(in[i])
			{
				case 'L': mat[--x][y]++;
					  break;
				case 'R': mat[++x][y]++;
					  break;
				case 'U': mat[x][++y]++;
					  break;
				case 'D': mat[x][--y]++;
					  break;
			}
			if(mat[x][y]>1)
				count++;
		}
		printf("%d\n",count);
	}
return 0;
}