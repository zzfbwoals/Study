import java.io.*;
import java.util.*;

// 주몽의 명령 (1940)
public class Main_04_007 {
    public static void main(String[] args) throws Exception {
        // 재료의 개수 N 입력, 갑옷을 만드는데 필요한 수 M 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.valueOf(br.readLine());
        int M = Integer.valueOf(br.readLine());
        // 배열 저장
        int arr[] = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        int i = 0;
        while(st.hasMoreTokens()) {
            arr[i] = Integer.valueOf(st.nextToken());
            i++;
        }
        // 배열 정렬
        Arrays.sort(arr);
        // 양쪽 끝 포인터
        int start = 0, end = N-1, cnt = 0;
        // M보다 작으면 start++ M보다 크면 end--
        while(start<end) {
            if(arr[start]+arr[end] > M) end--;
            else if(arr[start]+arr[end] < M) start++;
            else if(arr[start]+arr[end] == M) {
                cnt++;
                end--;
            }
        }
        System.out.println(cnt);
    }
}
