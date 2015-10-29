import java.io.*;
class test
{
public static void main(String ab[]) throws IOException
{
int n;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
while(true)
{
n=Integer.parseInt(br.readLine());
if(n==42)
System.exit(0);
else
System.out.println(n);
}}
}
