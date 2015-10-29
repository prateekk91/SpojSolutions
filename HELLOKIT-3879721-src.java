import java.io.*;
class hellokit
{
public static void main(String ab[]) throws IOException

{

String st;
char c;
int n,i,j,k;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
while(true)
{
st=br.readLine();
int ind=st.indexOf(" ");
if(st.equals("."))
System.exit(0);
else
{
n=Integer.parseInt(st.substring(ind+1));
String s=st.substring(0,ind);

int l=s.length();
for(k=0;k<l;k++)
{for(i=0;i<n;i++)
{
for(j=0;j<l;j++)
{System.out.print(s.charAt((j+k)%l));
}
}
System.out.println();
}
}}

}
}
