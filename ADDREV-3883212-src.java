import java.io.*;
class addrev
{
public static void main(String ab[]) throws IOException
{
int n,a,b,i,sum=0,r=0,rev=0;

String s;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
n=Integer.parseInt(br.readLine());

for(i=0;i<n;i++)
{
s=br.readLine();
int l=s.indexOf(" ");
a=Integer.parseInt(s.substring(0,l));
b=Integer.parseInt(s.substring(l+1));
while(a!=0)
{
rev=(rev*10)+(a%10);
a=a/10;
}
while(b!=0)
{
r=(r*10)+(b%10);
b=b/10;
}
sum=r+rev;
rev=0;

while(sum!=0)
{
rev=(rev*10)+(sum%10);
sum=sum/10;
}
System.out.println(rev);
rev=0;
r=0;
}

}
}
