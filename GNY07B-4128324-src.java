
import java.io.*;
import java.text.DecimalFormat;

class gny07b {
public static void main(String ab[]) throws IOException
{
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    String in;
    int t,i;
    t=Integer.parseInt(br.readLine());
    for(i=0;i<t;i++)
    {
        in=br.readLine();
        int ind=in.indexOf(" ");
        double value=Double.parseDouble(in.substring(0,ind));
        double ans=0.0000;
        DecimalFormat ans2=new DecimalFormat("#0.0000");
        String unit=in.substring(ind+1);
        if(unit.equalsIgnoreCase("kg"))
        {ans=value*2.2046;unit="lb";}
        else
            if(unit.equalsIgnoreCase("l"))
            {ans=value*0.2642;unit="g";}
            else
                if(unit.equalsIgnoreCase("lb"))
                {ans=value*0.4536;unit="kg";}
                else
                    if(unit.equalsIgnoreCase("g"))
                    {ans=value*3.7854;unit="l";}
        
        System.out.println((i+1)+" "+ans2.format(ans)+" "+unit);

    }
}
}
