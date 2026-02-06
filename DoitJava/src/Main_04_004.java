import java.io.*;
import java.util.StringTokenizer;

// 구간 합 구하기 (11660)
public class Main_04_004 {
    public static void main(String[] args) throws Exception {
        // 표의 크기 N, 합을 구하는 횟수 M 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.valueOf(st.nextToken());
        int M = Integer.valueOf(st.nextToken());
        // 배열 입력
        long arr[][] = new long[N+1][N+1];
        for (int i=1; i<=N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j=1; j<=N; j++) {
                arr[i][j] = Integer.valueOf(st.nextToken());
            }
        }
        // 구간합 입력
        long sumArr[][] = new long[N+1][N+1];
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                sumArr[i][j] = sumArr[i][j-1] + sumArr[i-1][j] - sumArr[i-1][j-1] + arr[i][j];
            }
        }
        // 출력
        for (int i=0; i<M; i++) {
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.valueOf(st.nextToken());
            int y1 = Integer.valueOf(st.nextToken());
            int x2 = Integer.valueOf(st.nextToken());
            int y2 = Integer.valueOf(st.nextToken());
            System.out.println((sumArr[x2][y2]-sumArr[x2][y1-1]-sumArr[x1-1][y2]+sumArr[x1-1][y1-1]));
        }
        br.close();
    }
}
