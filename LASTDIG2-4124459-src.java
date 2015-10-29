import java.io.*;
class lastdig{
public static void main(String y[]) throws IOException
{BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
String s;int n,i,d=0,x,t;long b,r,w;
n=Integer.parseInt(br.readLine());
for(i=0;i<n;i++)
{s=br.readLine();x=s.indexOf(" ");t=s.charAt(x-1)- '0';
b=Long.parseLong(s.substring(x+1));r=b%4;w=b%2;
if(b==0||t==1)
d=1;
else
{if(t==2)
{
d=r==0?6:(r==1?2:(r==2?4:8));
}
if(t==3)
{d=r==0?1:(r==1?3:(r==2?9:7));
}
if(t==4)
{d=w==0?6:4;}
if(t==5)
d=5;
if(t==6)
d=6;
if(t==7)
{d=r==0?1:(r==1?7:(r==2?9:3));}
if(t==8)
{d=r==0?6:(r==1?8:(r==2?4:2));}
if(t==9)
{d=w==0?1:9;}
if(t==0)
d=0;}
System.out.println(d);
}
}}
