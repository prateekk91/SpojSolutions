import java.io.*;
class samer08f
{
public static void main(String ab[]) throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int n,i;
long s=0;
while(true)
{
n=Integer.parseInt(br.readLine());
if(n==0)
System.exit(0);
for(i=1;i<=n;i++)
{
s+=(i*i);
}
System.out.println(s);
s=0;
}
}
}