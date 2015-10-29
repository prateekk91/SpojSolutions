import java.io.*;

class avion
{
	public static void main(String ab[]) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=1,count=0;
		String input;
		while(t<=5)
		{
			
			input = br.readLine();
			if(input.length()==0)
			{
				continue;
			}
			
			if(input.indexOf("FBI")!=-1)
			{
				System.out.print(t+" ");
				count++;
			}
			t++;
		}
		if(count==0)
			System.out.println("HE GOT AWAY!");
	}
}