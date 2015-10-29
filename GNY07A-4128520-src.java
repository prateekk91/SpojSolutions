import java.io.*;
class gny07a {
    public static void main(String ab[]) throws IOException
    {
     BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
     int t,i;
     t=Integer.parseInt(br.readLine());
     for(i=0;i<t;i++)
     {
         String in=br.readLine();
        	
         int ind=in.indexOf(" ");
         int num=Integer.parseInt(in.substring(0, ind));
         String in2=in.substring(ind+1);
         String s1=in2.substring(0,num-1);
         String s2=in2.substring(num);
         String in3=s1.concat(s2);
         System.out.println((i+1)+" "+in3);
     
     }
    }

}
