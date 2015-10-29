    import java.io.*;
    import java.util.*;

    class TOE1 {
       public static void main(String[] args) {
          Scanner sc = new Scanner(new BufferedInputStream(System.in));
          PrintWriter pw = new PrintWriter(new BufferedOutputStream(System.out));
          int t = sc.nextInt();
          for (int i = 0; i < t; i++) {
             sc.nextLine();
             String line[] = new String[3];
             int numX = 0, numO = 0;
             for (int j = 0; j < 3; j++) {
                line[j] = sc.nextLine();
                for (int k = 0; k < 3; k++) {
                   if (line[j].charAt(k) == 'X') {
                      numX++;
                   }
                   if (line[j].charAt(k) == 'O') {
                      numO++;
                   }
                }
             }
             if (numX - numO <= 1 && numX - numO >= 0) {
                boolean winX = false, winO = false;
                for (int j = 0; j < 3; j++) {
                   if (line[j].compareTo("XXX") == 0) {
                      winX = true;
                   }
                   if (line[j].compareTo("OOO") == 0) {
                      winO = true;
                   }
                   if (line[0].charAt(j) == 'X' && line[1].charAt(j) == 'X'
                         && line[2].charAt(j) == 'X') {
                      winX = true;
                   }
                   if (line[0].charAt(j) == 'O' && line[1].charAt(j) == 'O'
                         && line[2].charAt(j) == 'O') {
                      winO = true;
                   }
                }
                if (line[0].charAt(0) == 'X' && line[1].charAt(1) == 'X'
                      && line[2].charAt(2) == 'X') {
                   winX = true;
                }
                if (line[0].charAt(2) == 'X' && line[1].charAt(1) == 'X'
                      && line[2].charAt(0) == 'X') {
                   winX = true;
                }
                if (line[0].charAt(0) == 'O' && line[1].charAt(1) == 'O'
                      && line[2].charAt(2) == 'O') {
                   winO = true;
                }
                if (line[0].charAt(2) == 'O' && line[1].charAt(1) == 'O'
                      && line[2].charAt(0) == 'O') {
                   winO = true;
                }
                if ( (winX && winO) || (winX && (numX==numO)) || (winO && (numX!=numO)) ) {
                   pw.println("no");
                } else {
                   pw.println("yes");
                }
             } else {
                pw.println("no");
             }
          }
          pw.flush();
       }
    }
