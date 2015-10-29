import java.io.*;
class anarc08e
{
 public static void main(String ab[]) throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int a,b;
String s;
while(true)
{
s=br.readLine();
int n=s.lastIndexOf(" ");
int m=s.lastIndexOf(" ");


a=Integer.parseInt(s.substring(0,(s.indexOf(" "))));
b=Integer.parseInt(s.substring(s.lastIndexOf(" ")+1));
if(a==-1&&b==-1)
System.exit(0);

if(a==1||b==1)
System.out.println(a+"+"+b+"="+(a+b));
else
System.out.println(a+"+"+b+"!="+(a+b));

}

}
}