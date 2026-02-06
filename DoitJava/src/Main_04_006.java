import java.io.*;

// 연속된 자연수의 합 구하기 (2018)
public class Main_04_006 {
    public static void main(String[] args) throws Exception {
        // 자연수 N 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.valueOf(br.readLine());
        // 크기가 N인 배열 선언하고 1~N의 값을 저장 (삭제)
        // 투 포인터 사용 (배열 불필요하게 메모리 쓰지 않고 인덱스로 바로 계산)
        int start = 1;
        int end = 1;
        int sum = 1;
        int cnt = 1;
        
        while(end != N) {
            if(sum == N) {
                cnt++;
                end++;
                sum += end;
            } else if(sum > N) {
                sum -= start;
                start++;
            } else {
                end++;
                sum += end;
            }
        }
        System.out.println(cnt);
        br.close();
    }
}
