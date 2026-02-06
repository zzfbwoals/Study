import java.io.*;
import java.util.StringTokenizer;

// 평균 구하기 (1546)
public class Main_04_002 { 
    public static void main(String[] args) throws Exception{
        // 과목 개수 N 입력받기
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.valueOf(br.readLine());
        // 과목 점수 입력받기
        StringTokenizer st = new StringTokenizer(br.readLine());
        // 과목 개수 N 사이즈의 배열 선언
        int arr[] = new int[N];
        // 과목 점수 저장 및 최댓값 max 찾기
        int max = -1;
        for (int i=0; i<N; i++) {
            arr[i] = Integer.valueOf(st.nextToken());
            max = (max < arr[i] ? arr[i] : max);
        }
        // 과목 점수 다시 저장
        double arr2[] = new double[N];
        for (int i=0; i<N; i++) {
            arr2[i] = (arr[i]/(double)max)*100;
        }
        // 평균 구하기
        double avg = 0;
        for (int i=0; i<N; i++) {
            avg += arr2[i];
        }
        avg /= N;
        // 출력
        System.out.println(avg);
        
        br.close();
    }
}
