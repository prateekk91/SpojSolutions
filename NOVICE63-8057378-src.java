
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Prateek
 */
class novice63 {
    public static void main(String ab[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BigInteger f[] = new BigInteger[100];
        int i;
        f[0] = f[1] = new BigInteger("1");
        for(i=2;i<=65;i++)
            f[i] = f[i-1].multiply(new BigInteger(Integer.toString(i)));
        int t;
        long n;
        t = Integer.parseInt(br.readLine());
        BigInteger ans[] = new BigInteger[65];
        ans[0] =  new BigInteger("0");
        ans[1] = ans[2] = ans[3] = new BigInteger("1");
        for(i=4;i<=64;i++)
        {
            if(i%2==0){
                //System.out.println(f[i-1]+" "+f[i/2]);
                ans[i] = ans[i-1].add(f[i-1].divide(f[i/2]).divide(f[(i-1)/2]));
            }
                
            else
                ans[i] = ans[i-1];
        }
        for(i=0;i<t;i++)
        {
            n = Long.parseLong(br.readLine());
            int count=-1;
            while(n!=0)
            {
                count++;
                n>>=1;
            }
            System.out.println(ans[count]);
        }
    }
}    
    
