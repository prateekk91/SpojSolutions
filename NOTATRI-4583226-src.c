# include<stdio.h>
int cmp(const void *a,const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x-*y;
}


int main(void){
    int N;
    int i,j,low,high,key,mid;
    int C;
    while(scanf("%d",&N)&&N>0){
    int a[N];
    C = 0;
    for(i=0;i<N;i++)
      scanf("%d",&a[i]);
    qsort(a,N,sizeof(a[0]),cmp);
    
    for(i=0;a[i]+a[i+1]<a[N-1];i++){
        for(j=i+1;a[i]+a[j]<a[N-1];j++){
           low = 0,high = N - 1;
           key=a[i]+a[j];

           while(low != high){
               mid = (low + high)/2;
               if(a[mid]>key)
                 high=mid;
               else
                 low=mid+1;
            }
            C += (a[low]>key)?(N-low):0;
        }
    }
    printf("%d\n",C);
    }

    return 0;
}
