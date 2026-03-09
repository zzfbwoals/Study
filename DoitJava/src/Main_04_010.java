import java.io.*;
import java.util.*;

// 최솟값 찾기 (11003) -> 슬라이딩 윈도우, 덱 사용
public class Main_04_010 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());
        Deque<Node> deque = new LinkedList<>();

        st = new StringTokenizer(br.readLine());
        // N 번 반복하며 숫자 받기
        for(int i=0; i<N; i++) {
            int now = Integer.parseInt(st.nextToken());
            // 덱의 마지막 숫자가 추가되려는 숫자보다 크거나 덱이 비어있지 않으면 삭제
            while(!deque.isEmpty() && deque.getLast().num > now) {
                deque.removeLast();
            }
            // 덱 뒤에 추가
            deque.addLast(new Node(now, i));
            // 슬라이딩 윈도우 범위 벗어난다면 값 삭제
            if(deque.getFirst().index <= i-L) {
                deque.removeFirst();
            }
            bw.write(deque.getFirst().num + " ");
        }
        bw.flush();
        bw.close();
        br.close();
    }

    static class Node {
        int num;
        int index;
        Node(int num, int index) {
            this.num=num;
            this.index=index;
        }
    }
}
