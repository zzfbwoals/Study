import java.io.*;
import java.util.*;

public class Main_04_011 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // 결과를 한 번에 모아서 출력하기 위해 StringBuilder 사용
        StringBuilder sb = new StringBuilder();
        
        int size = Integer.parseInt(br.readLine());
        int cur = 1;
        Stack<Integer> stack = new Stack<>();
        
        boolean isPossible = true; // 수열 가능 여부 플래그

        for(int i=0; i<size; i++) {
            int num = Integer.parseInt(br.readLine());
            
            // 1. 목표 숫자까지 push
            while(cur <= num) {
                stack.push(cur++);
                sb.append("+\n");
            }
            
            // 2. 스택의 맨 위 숫자가 목표 숫자와 맞는지 확인
            if(!stack.isEmpty() && stack.peek() == num) {
                stack.pop();
                sb.append("-\n");
            } else {
                // 3. 만들 수 없는 수열이라면 플래그 변경 후 중단
                isPossible = false;
                break;
            }
        }

        // 최종 결과 출력
        if(isPossible) {
            System.out.print(sb.toString());
        } else {
            System.out.println("NO");
        }
        
        br.close();
    }
}