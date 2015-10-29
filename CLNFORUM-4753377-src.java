/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Prateek
 */
import java.io.*;

class clnforum {
    public static void main(String ab[]) throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        String input,output="";
        char a,b,c;
        int i,j,t;
        t = Integer.parseInt(br.readLine());

        while((t--)>0)
        {
                output = "";
                input = br.readLine();
                if(input.length()==0)
                {t++;
                 continue;
                
                }
                input += " ";
                for(i=0;i<input.length();i++)
                {
                    c = input.charAt(i);
                    if(c==' ')
                    {
                        output  += " ";
                        continue;
                    }
                    else
                    {
                        int x = input.indexOf(" ",i);
                        String out = input.substring(i,x);
                        if(out.equals("8"))
                            output += "ate";
                        else
                            if(out.equals("w8"))
                            output += "wait";
                        else
                            if(out.equals("gr8"))
                            output += "great";
                        else
                            if(out.equals("4"))
                            output += "for";
                        else
                            if(out.equals("b4"))
                            output += "before";
                        else
                            output += out;
                        i=x-1;
                    }
                }
                    int x = output.lastIndexOf(" ");
                    while(output.charAt(x)==' ')
                        x--;
                    for(j=0;j<=x;j++)
                        System.out.print(output.charAt(j));
                  System.out.println();
        }

     }

  }




