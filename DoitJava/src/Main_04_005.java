import java.io.*;
import java.util.StringTokenizer;

// 나머지 합 구하기 (10986)
public class Main_04_005 {
    public static void main(String[] args) throws Exception {
        //N개의 수의 N 입력, 나눔값 M 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.valueOf(st.nextToken());
        int M = Integer.valueOf(st.nextToken());
        //구간합 저장하면서 M으로 나눠 떨어지는 개수 cnt
        long cnt = 0;
        long arr[] = new long[N+1];
        long arr2[] = new long[M];
        st = new StringTokenizer(br.readLine());
        for (int i=1; i<=N; i++) {
            arr[i] = arr[i-1] + Integer.valueOf(st.nextToken());
            if (arr[i]%M==0) cnt++;
            arr2[(int)(arr[i]%M)]++;
        }
        for (int i=0; i<M; i++) {
            if(arr2[i]>1) cnt = cnt + (arr2[i]*(arr2[i]-1)/2);
        }
        System.out.println(cnt);
    }
}
