import java.io.*;
import java.util.*;

// 좋은 수 구하기 (1253)
public class Main_04_008 {
    public static void main(String[] args) throws Exception {
        // 재료의 개수 N 입력, 갑옷을 만드는데 필요한 수 M 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.valueOf(br.readLine());
        // 배열 저장
        long arr[] = new long[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++) {
            arr[i] = Long.valueOf(st.nextToken());
        }
        // 배열 정렬
        Arrays.sort(arr);
        int cnt=0;
        // 좋은 수 찾기
        for(int k=0; k<N; k++) {
            int start=0, end=N-1;
            long value=arr[k];
            while(start<end) {
                if(arr[start]+arr[end]==value) {
                    if(start != k && end != k) {
                        cnt++;
                        break;
                    } else if(start == k) {
                        start++;
                    } else if (end == k) {
                        end--;
                    }
                } else if(arr[start]+arr[end]<value) {
                    start++;
                } else {
                    end--;
                }
            }
        }
        System.out.println(cnt);
        br.close();
    }
}
