// 에라토스테네스의 체
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int num = 1000000;
    int arr[1000001]={0};
    for(int i=2;i<=num;i++){
      // 2부터 시작
        arr[i]=i;
    }
    for(int i=2;i<=num;i++){
        if(arr[i]==0) continue;
        for(int j=i+i;j<=num;j+=i){
          // 2의 배수, 3의 배수 .. 지워줌
          // 2의 배수인 경우 4부터 시작
          // 2는 소수이므로
            arr[j]=0;
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]!=0) answer++;
    }
    return answer;
}