#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0; // 접은 횟수

    cin >> wallet[0] >> wallet[1]; // 지갑의 가로, 세로 입력
    int minWallet, maxWallet;
    if(wallet[0]<wallet[1]) {
        minWallet = wallet[0]; maxWallet = wallet[1];
    }
    else{
        minWallet = wallet[1]; maxWallet = wallet[0];
    }
    cin >> bill[0] >> bill[1]; // 지폐의 가로, 세로 입력
    int minBill, maxBill;
    if(bill[0]<bill[1]) {
        minBill = bill[0]; maxBill = bill[1];
    }
    else{
        minBill = bill[1]; maxBill = bill[0];
    }

    while(minBill>minWallet && maxBill>maxWallet){
        if(bill[0]>bill[1]) bill[0]/=2;
        else bill[1] /=2;
        answer+=1;
    }

    cout << answer << endl;

    return answer;
}