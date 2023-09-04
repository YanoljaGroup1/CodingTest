#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v;
    for(int i=1;i<=number;i++){
        int cnt=1;
        for(int j=1;j<=i/2;j++){
          // 약수 구하는 부분
          // i/2를 한 이유는
          // 예를 들어 8의 약수의 경우 1, 2, 4, 8
          // 8을 제외한 수는 8의 절반인 4를 넘지 않기 때문
            if(i%j==0) cnt++;
            if(cnt>limit){
                cnt=power;
                break;
            }
        }
        answer+=cnt;
    }
    return answer;
}