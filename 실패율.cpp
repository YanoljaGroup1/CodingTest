#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Node {
    double x; // 실패율 값
    int idx; // idx번호
};

bool compare(Node a, Node b){
    
    if(a.x==b.x){
      // 실패율 값이 같다면
        return a.idx<b.idx;
        // 인덱스로 오름차순
    }
    return a.x>b.x;
    // 실패율 값 내림차순
};

vector<int> solution(int N, vector<int> stages) {
    int size = stages.size();
    vector<int> answer;
    vector<Node> ans;
    for(int i=1;i<=N;i++){
        float cnt=0;
     for(int j=0;j<stages.size();j++){
         if(i==stages[j]){
             cnt++;
         }
     }  
        cout<<size<<endl;
        double res=(size>0)?cnt/size:0.0;
        // 사이즈가 0이 나오는 경우가 있다
        // ex) 5 [2,4]
        // 1 0/2
        // 2 1/2 -> 실패율 0.5
        // 3 0/1
        // 4 1/1 -> 실패율 1
        // 5 0/0 -> 사이즈가 0
        // return a.x>b.x에 따라 4, 2로 내림차순
        // if(a.x==b.x)에 따라 인덱스 순으로 오름차순
        size-=cnt;
        ans.push_back({res,i});
    }
    sort(ans.begin(), ans.end(), compare);
    for(int i=0;i<ans.size();i++){
        answer.push_back(ans[i].idx);
    }
    return answer;
}