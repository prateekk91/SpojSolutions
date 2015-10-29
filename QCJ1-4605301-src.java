import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.valueOf(br.readLine()).intValue();
        br.readLine();
        String[] w = new String[n];
        for(int i=0; i<n; ++i)
            w[i] = br.readLine();
        
        int hdist = w[n-1].length();
        
        char[][] walk = new char[n][hdist];
        for(int i=0; i<n; ++i) {
            int j;
            for(j=0; j<w[i].length(); ++j)
                walk[i][j] = w[i].charAt(j);
            for(; j<hdist; ++j)
                walk[i][j] = ' ';
        }
        
        int wdist = 0;
        String walks = "";
        String curwalk = "";
        int curdist = 0;
        int i = n-1;
        char curchar = 'a';
        
        for(int j=0; j<hdist; ++j) {
            if(i < 0)
                i = 0;
            if(i > n-1)
                i = n-1;
            switch(walk[i][j]) {
                case ' ':
                    switch(curchar) {
                        case '/':
                            ++i;
                            break;
                        case '\\':
                            --i;
                            break;
                        case '_':
                            if(i==0)
                                ++i;
                            else if(i==n-1)
                                --i;
                            else if(walk[i+1][j]==' ')
                                --i;
                            else
                                ++i;
                            break;
                    }
                    --j;
                    --wdist;
                    break;
                case '/':
                    if(walk[i][j]==curchar) {
                        ++curdist;
                        curwalk = "Up " + curdist + " steps";
                    }
                    else {
                        walks += curwalk + "\n";
                        curdist = 1;
                        curwalk = "Up 1 steps";
                        curchar = '/';
                    }
                    --i;
                    break;
                case '\\':
                    if(walk[i][j]==curchar) {
                        ++curdist;
                        curwalk = "Down " + curdist + " steps";
                    }
                    else {
                        walks += curwalk + "\n";
                        curdist = 1;
                        curwalk = "Down 1 steps";
                        curchar = '\\';
                    }
                    ++i;
                    break;
                case '_':
                    if(walk[i][j]==curchar) {
                        ++curdist;
                        curwalk = "Walk " + curdist + " steps";
                    }
                    else {
                        walks += curwalk + "\n";
                        curdist = 1;
                        curwalk = "Walk 1 steps";
                        curchar = '_';
                    }
                    break;
            }
            ++wdist;
        }
        
        System.out.print("Total Walk Distance = " + wdist);
        System.out.println(walks + curwalk);
    }
}