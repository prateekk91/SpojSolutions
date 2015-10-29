import java.io.*;
class hepnum
{
public static void main(String ab[]) throws IOException
{

	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	
	String s;
	String s1,s2;
	char c;
	
	while(true)
	{
	int flag=0;
	s=br.readLine();
	if(s.equals("* *"))
	break;
	s1=s.substring(0,s.indexOf(' '));
	s2=s.substring(s.indexOf(' ')+1);
	
	int k=0;
	while(s1.charAt(k++)=='0')
	{if(k>=s1.length())break;}
	s1=s1.substring(k-1);
	k=0;
	while(s2.charAt(k++)=='0')
	{if(k>=s2.length())break;}
	s2=s2.substring(k-1);
	
	int sum1=0,sum2=0;
	
	if(s1.length()>s2.length())
	{System.out.println(">");flag=1;}
	else
	if(s2.length()>s1.length())
	{System.out.println("<");flag=1;}
	else
	if(s1.length()==s2.length())
	{


	for(int i=0;i<s1.length();i++)
	{
	char c1,c2;
	c1=s1.charAt(i);
	c2=s2.charAt(i);
	
	if(c2<='9')
	sum2=(s2.charAt(i)-'0');
	else
	{
	c2=s2.charAt(i);
	switch(c2)
	{
	case 'A':sum2=10;
		break;
	case 'B': sum2=11;
		break;
	case 'C': sum2=12;
		break;
	case 'D': sum2=13;
		break;
	case 'E': sum2=14;
		break;
	case 'F': sum2=15;
		break;
	case 'G' : sum2=16;
	}
	}
	
	
	if(c1<='9')
	sum1=(s1.charAt(i)-'0');
	else
	{
	c1=s1.charAt(i);
	switch(c1)
	{
	case 'A':sum1=10;
		break;
	case 'B': sum1=11;
		break;
	case 'C': sum1=12;
		break;
	case 'D': sum1=13;
		break;
	case 'E': sum1=14;
		break;
	case 'F': sum1=15;
		break;
	case 'G' : sum1=16;
	}
	}
	
	if(sum1>sum2)
	{System.out.println(">");flag=1;break;
	}
	if(sum2>sum1)
	{System.out.println("<");flag=1;break;}
	}
	if(flag==0)
	System.out.println("=");
	}
	
	
	}
}}