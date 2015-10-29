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


class bishops {
    public static void main(String ab[]) throws IOException
    {
         BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         String input="";
         while(true)
         {
               BigInteger b1=new BigInteger("1");
               try{
                   try{
             input=br.readLine();
                   }
                   catch(Exception e)
                   {
                       break;
                   }
                   if(input.length()==0)
                    continue;
             else
             {
                if(input.equals("1"))
                     System.out.println("1");
                else
                {
                    b1 = (new BigInteger(input)).multiply(new BigInteger("2")).subtract(new BigInteger

("2"));


                System.out.println(b1.toString());
                }



             }
               } catch(Exception e)
               {
                   break;
               }
         }
    }
}

 