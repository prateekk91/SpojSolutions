import java.math.*;
import java.io.*;
import java.util.StringTokenizer;
class coin

{

    public static void main( String[] args ) throws IOException
{

BufferedReader br = new BufferedReader( new InputStreamReader( System.in ));
int n, m;

int t = Integer.parseInt( br.readLine() );
StringTokenizer tok;
String s;
BigInteger b1[]=new BigInteger[1011];
int i;
b1[0]=new BigInteger("1");
for(i=1;i<=1010;i++)
{
    b1[i] = new BigInteger("2").multiply(b1[i-1]);
}

for( int T=0; T<t; T++ )
{
    s = br.readLine();
    tok = new StringTokenizer( s );

    n = Integer.parseInt( tok.nextToken() );
    m = Integer.parseInt( tok.nextToken() );
    System.out.println((b1[n+1].subtract(b1[m+1])).toString()+".00");

   }



    }
}



