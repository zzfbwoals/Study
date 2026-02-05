import java.io.*;

// 숫자의 합 구하기
public class Main_04_001 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int size = Integer.valueOf(br.readLine());
        String arr = br.readLine();
        int sum = 0;
        for(int i=0; i<arr.length(); i++) {
            sum += arr.charAt(i) - '0';
        }
        bw.write(String.valueOf(sum));

        bw.flush();
        br.close();
        bw.close();
    }
}
