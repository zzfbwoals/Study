import java.io.*;
import java.util.StringTokenizer;

// 구간 합 구하기 (11659)
public class Main_04_003 {
    public static void main(String[] args) throws Exception {
        // 수의 개수 N, 합을 구해야 하는 횟수 M 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.valueOf(st.nextToken());
        int M = Integer.valueOf(st.nextToken());
        // N개의 수로 이루어진 배열 저장 후 구간 합 배열 저장
        long arr[] = new long[N + 1];
        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            arr[i] = Integer.valueOf(st.nextToken());
        }
        
        long sumArr[] = new long[N + 1];
        for (int i = 1; i <= N; i++) {
            sumArr[i] = sumArr[i - 1] + arr[i];
        }
        // M번 반복하면서 합을 구해야 하는 구간 i와 j의 구간 합 구하고 출력
        for (int i=0; i<M; i++) {
            int start = 0, end = 0;
            st = new StringTokenizer(br.readLine());
            start = Integer.valueOf(st.nextToken());
            end = Integer.valueOf(st.nextToken());
            System.out.println(sumArr[end]-sumArr[start-1]);
        }
        br.close();
    }
}
