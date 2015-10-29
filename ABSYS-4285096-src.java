import java.io.*;

class absys
{
    public static void main(String ab[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        
	String input,str1="",str2="",str3="";
        int num1,num2,ans=0,t;
        
	t=Integer.parseInt(br.readLine());
        while(t!=0)
        {
            
            input=br.readLine();
	    if(input.indexOf('m')==-1){continue;}
            
            int ind_of_plus=input.indexOf("+");
            int ind_of_equals=input.indexOf("=");
            str1=input.substring(0, ind_of_plus);
            str2=input.substring(ind_of_plus+1, ind_of_equals);
            str3=input.substring(ind_of_equals+1);
            str1=str1.trim();
            str2=str2.trim();
            str3=str3.trim();
            
		
            if(str1.indexOf('m')!=-1)
            {
                 ans=Integer.parseInt(str3);
                 num2=Integer.parseInt(str2);
                 num1=ans-num2;
                input= input.replace(str1, Integer.toString(num1));
            }
            if(str2.indexOf('m')!=-1)
            {
                ans=Integer.parseInt(str3);
                 num1=Integer.parseInt(str1);
                 num2=ans-num1;
                input= input.replace(str2, Integer.toString(num2));
            }
            if(str3.indexOf('m')!=-1)
            {
                num2=Integer.parseInt(str2);
                 num1=Integer.parseInt(str1);
                 ans=num2+num1;
                 String temp=Integer.toString(ans);
                 input=input.replace(str3,temp);
            }
	
	
           
                    System.out.println(input);
                    t--;
            
        }
	
    }
}