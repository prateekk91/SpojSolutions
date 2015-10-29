

import java.io.*;

class mirror {
    public static void main(String ab[]) throws IOException
    {
        String in;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Ready");
        do
        {
            in=br.readLine();
            if(in.equals("  "))
                break;
            else
                if(in.equals("bd")||in.equals("db")||in.equals("pq")||in.equals("qp"))
                    System.out.println("Mirrored pair");
                else
                    System.out.println("Ordinary pair");
        }while(!in.equals("  "));
    }

}
