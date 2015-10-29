import java.io.*;
class mflar10
{
	public static void main(String ab[]) throws IOException
        {
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            String input,word;
            int i;
            while(true)
            {   int c=0;
                input=br.readLine();
                if(input.equals("*"))
                    break;
                input+=" ";
                char ch=input.charAt(0);
                if(ch>=65&&ch<=90)
                    ch+=32;
                for(i=0;i<input.length();i++)
		{
			int index;
                        index=input.indexOf(" ", i);
                        word=input.substring(i, index);
                        char ch2=word.charAt(0);
                        if(ch2>=65&&ch2<=90)
                    ch2+=32;

                        if(ch2!=ch)
                        {c=1;break;
                          }
                        i=index;

        }
                if(c==1)
                    System.out.println("N");
                else
                    System.out.println("Y");
                
}
}
}