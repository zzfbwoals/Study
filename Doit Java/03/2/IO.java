import java.io.*;
import java.util.Scanner;

public class IO {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println(a);

        sc.close();

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int b = Integer.parseInt(br.readLine());
        bw.write(String.valueOf(b));

        bw.flush();
        br.close();
        bw.close();
    }
}