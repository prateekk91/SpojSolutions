/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Prateek
 */
import java.io.*;
import java.math.BigInteger;

class julka {
    public static void main(String ab[]) throws IOException

    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=10;
        //t=Integer.parseInt(br.readLine());
        while((t--)>0)
        {
            String inp=br.readLine();
            String diff=br.readLine();
            BigInteger b1=new BigInteger(inp);
            BigInteger b2=new BigInteger(diff);
            BigInteger b3=b1.subtract(b2);
            BigInteger b4=b3.divide(new BigInteger("2"));
            BigInteger b5=b4.add(b2);
            System.out.println(b5.toString());
            System.out.println(b4.toString());



        }
    }

}
