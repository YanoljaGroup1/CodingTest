#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    
    // 1미터 길이의 구역 n개로 나눔
    // 각 구역에 왼쪽부터 순서대로 1번부터 n번까지 번호
    // 롤러의 길이는 m미터
    // 롤러가 벽에서 벗어나면 안됨
    // 구역의 일부분만 포함되도록 칠하면 안됨
    int answer = 0;
    int location = 0;
    for(int i=0;i<section.size();i++){
        if(location > section[i]) continue;
        answer++;
        location = section[i]+m;
    }
    return answer;
}