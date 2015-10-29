import java.io.*;
class acpc11a
{
       public static void main(String ...aa) throws IOException
       {
           BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
           String in;
           String inp;
           String a="",b="",c="";
           char ch;
           int i,j,k,l,m,n;
           int t;
           do
           {
               inp = br.readLine();
           }while(inp.length()==0);
           t = Integer.parseInt(inp);
           while((t--)>0)
           {
               a=b=c=in="";
               inp = "";
               do
                {
                    inp = br.readLine();
                }while(inp.length()==0);
                n = Integer.parseInt(inp);


               do
               {
                 inp = br.readLine();

               }while(inp.length()==0);
                in = inp;
                l = in.length();
                for(i=0;i<l;i++)
                {
                    ch = in.charAt(i);
                    if(ch == '#' || ch ==' ')
                        a += ch;
                    else
                    {
                        
                        break;
                    }

                }
                for(;i<l;i++)
                {
                    ch = in.charAt(i);
                    if(ch!=' ')
                    {
                        b += ch;
                    }
                    else
                    {
                        
                        break;
                    }
                }
                for(;i<l;i++)
                {
                    ch = in.charAt(i);
                    if(ch == '#' || ch ==' ')
                        c += ch;
                    else
                    {
                        i--;
                        break;
                    }

                }
                a=a.trim();
                b=b.trim();
                c=c.trim();
               if(b.length()!=0 &&c.length()!=0)
               {

                  c+=" ";
                  
               }
                if(a.length()!=0 && b.length()!=0)
                {
                    b+=" ";
                }
                System.out.println(c+b+a);

           }
       }
}
