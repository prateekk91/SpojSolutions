
import java.io.*;
import java.math.BigInteger;

class geoprob {
    public static void main(String ab[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t;
        String a1,b1,c1,d1;
        BigInteger a,b,c,d;
        t = Integer.parseInt(br.readLine());
        while((t--)>0)
        {
            String input=br.readLine();
            if(input.length()==0)
            {
                t++;
                continue;
            }

            int i=0;

                int ind = input.indexOf(" ",i);
                b1 = input.substring(i,ind);
                i=ind+1;
                ind = input.indexOf(" ",i);
                c1 = input.substring(i,ind);
                d1 = input.substring(ind+1);
                b = new BigInteger(b1);
                c = new BigInteger(c1);
                d = new BigInteger(d1);
                a = c.multiply(new BigInteger("2")).subtract(b).subtract(d);
                System.out.println(a.toString());



        }
    }

}

