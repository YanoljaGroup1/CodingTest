#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    // k가 최상품의 사과
    // 1점이 최하품의 사과
    // m이 한 상자에 들어가는 사과의 수
    // score 사과들의 점수
    // 최저 사과 점수 * 한 상자에 담긴 사과 개수 * 사과 개수
    vector<vector<int>> container;
    int answer = 0;
    sort(score.begin(), score.end(), greater<int>()); // 내림차순
    for(int i=0;i<score.size();i+=m){
        vector<int> mid; 
        for(int j=0;j<m;j++){
            mid.push_back(score[i+j]);
        }
        container.push_back(mid);
    }
    for(int i=0;i<container.size();i++){
        answer+=container[i][container[i].size()-1]*m;
    }
    return answer;
}