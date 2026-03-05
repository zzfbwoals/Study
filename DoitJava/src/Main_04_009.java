import java.io.*;
import java.util.*;

// DNA 비밀번호 (12891)
public class Main_04_009 {

    static int acgt[] = new int[4];
    static int acgtCheck[] = new int[4];
    static int check = 0, cnt = 0;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // DNA 문자열의 길이, 부분 문자열의 길이 입력
        StringTokenizer st = new StringTokenizer(br.readLine());
        int stringLength = Integer.parseInt(st.nextToken());
        int subStringLength = Integer.parseInt(st.nextToken());

        // DNA 문자열 입력
        String str = br.readLine();

        // 부분 문자열에 포함돼야 할 A, C, G, T의 최소 개수 입력
        st = new StringTokenizer(br.readLine());
        for(int i=0; st.hasMoreTokens(); i++){
            acgt[i] = Integer.parseInt(st.nextToken());
        }

        // 초기 check 값 설정 (필요한 개수가 0인 조건들은 미리 만족)
        check = 0;
        for(int i = 0; i < 4; i++) {
            if(acgt[i] == 0) check++;
        }

        // DNA 문자열 길이 - 부분 문자열 길이 + 1 만큼 반복해서 유효한 비밀번호 인지 판단
        // 반복마다 빠지는 문자열 들어오는 문자열 업데이트 해서 판단
        for(int i=0; i<subStringLength; i++) {
            Add(str.charAt(i));
        }
        
        if(check==4) cnt++;

        for(int i=subStringLength; i<stringLength; i++) {
            int j=i-subStringLength;
            Add(str.charAt(i));
            Remove(str.charAt(j));
            if(check==4) cnt++;
        }
        System.out.println(cnt);
        br.close();
    }

        public static void Add(char c) {
        switch (c) {
            case 'A':
                acgtCheck[0]++;
                if(acgt[0]==acgtCheck[0]) check++;
                break;
            case 'C':
                acgtCheck[1]++;
                if(acgt[1]==acgtCheck[1]) check++;
                break;
            case 'G':
                acgtCheck[2]++;
                if(acgt[2]==acgtCheck[2]) check++;
                break;
            case 'T':
                acgtCheck[3]++;
                if(acgt[3]==acgtCheck[3]) check++;
                break;
        }
    }

    public static void Remove(char c) {
        switch (c) {
            case 'A':
                if(acgt[0]==acgtCheck[0]) check--;
                acgtCheck[0]--;
                break;
            case 'C':
                if(acgt[1]==acgtCheck[1]) check--;
                acgtCheck[1]--;
                break;
            case 'G':
                if(acgt[2]==acgtCheck[2]) check--;
                acgtCheck[2]--;
                break;
            case 'T':
                if(acgt[3]==acgtCheck[3]) check--;
                acgtCheck[3]--;
                break;
        }
    }
}
