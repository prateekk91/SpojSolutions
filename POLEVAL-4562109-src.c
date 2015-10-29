# include <stdio.h>

int main()

{

    int n,k,i,j,count=0;

    long long int ans;

    while(1)

    {      

                             scanf("%d",&n);

                             if(n==-1)

                             break;                  

                             count++;

                             ans=0;

                             int coef[n+1];

                             for(i=0;i<=n;i++)

                             {

                                             scanf("%d",&coef[i]);

                             }

                             scanf("%d",&k);

                             int x[k];

                             for(i=0;i<k;i++)

                                             scanf("%d",&x[i]);

				

	                     

                             printf("Case %d:\n",count);
				long long int xi;
				

                             for(i=0;i<k;i++)

                             {               

                                             xi=1;ans=0;

                                             for(j=0;j<=n;j++)

                                             {
			//printf("coef=%d x[i]=%d\n xi=%llu\n",coef[n-j],x[i],xi);
				                             ans+=(coef[n-j]*xi);

                                                             xi=(xi*x[i]);

                                             }

                                             printf("%lld\n",ans);

                             }

    }

return 0;

}