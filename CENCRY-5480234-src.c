# include<stdio.h>
# include<string.h>
int main()
{
	char store[130][130];
	int arr[130]={0};
	char inp[50010];
	int i,j,k,t;
	int count[130]={0};
	strcpy(store['a'],"bhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpv");
	strcpy(store['e'],"cjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqw");
	strcpy(store['i'],"dkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrx");
	strcpy(store['o'],"flrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsy");
	strcpy(store['u'],"gmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntzgmsyflrxdkqwcjpvbhntz");
	strcpy(store['b'],"aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou");
	strcpy(store['c'],"eiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeioua");
	strcpy(store['d'],"iouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouae");
	strcpy(store['f'],"ouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaei");
	strcpy(store['g'],"uaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeio");
	strcpy(store['h'],"aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou");
	strcpy(store['j'],"eiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeioua");
	strcpy(store['k'],"iouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouae");
	strcpy(store['l'],"ouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaei");
	strcpy(store['m'],"uaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeio");
	strcpy(store['n'],"aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou");
	strcpy(store['p'],"eiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeioua");
	strcpy(store['q'],"iouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouae");
	strcpy(store['r'],"ouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaei");
	strcpy(store['s'],"uaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeio");
	strcpy(store['t'],"aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou");
	strcpy(store['v'],"eiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeioua");
	strcpy(store['w'],"iouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouae");
	strcpy(store['x'],"ouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaei");
	strcpy(store['y'],"uaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeio");
	strcpy(store['z'],"aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou");
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&inp);
		for(i=96;i<=123;i++)
			count[i]=0;
		int l=strlen(inp);
		for(i=0;i<l;i++)
			printf("%c",store[inp[i]][(count[inp[i]]++)%105]);
		printf("\n");
	}
	return 0;
}