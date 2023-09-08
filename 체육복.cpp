#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 예를들어 3번이 lost
    // 4번이나 2번만 빌려줄 수 있음
    // reserve와 lost에 동일한 사람이 있을 수 있음 -> 이는 빌려줄 수 없다.
    int answer = n-lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    int lostsize = lost.size();
    int reservesize = reserve.size();
    vector<int> container;
    vector<int> stack1={0};
    vector<int> stack2={0};
    for(int i=0;i<lostsize;i++){
        for(int j=0;j<reservesize;j++){
            if(lost[i]==reserve[j]) container.push_back(lost[i]);
        }
    }
    if(container.size()>0){
        // reserve와 lost에 동일한 사람 존재
        for(int i=0;i<container.size();i++){
            for(int j=0;j<lost.size();j++){
                if(container[i]==lost[j]){
                    lost.erase(lost.begin()+j);
                    break;
                }
            }
        }
        for(int i=0;i<container.size();i++){
            for(int j=0;j<reserve.size();j++){
                if(container[i]==reserve[j]){
                    reserve.erase(reserve.begin()+j);
                    answer++;
                    break;
                }
            }
        }
        
        if(lost.size()>0 && reserve.size()>0){
            for(int i=0;i<lost.size();i++){
                for(int j=0;j<reserve.size();j++){
                    if((lost[i]+1==reserve[j] || lost[i]-1==reserve[j]) && (stack1[stack1.size()-1]!=lost[i] && stack2[stack2.size()-1]!=reserve[j])){
                        answer++;
                        stack1.push_back(lost[i]);
                        stack2.push_back(reserve[j]);
                    }
                }
            }
        }
    }
    else{
        for(int i=0;i<lost.size();i++){
            for(int j=0;j<reserve.size();j++){
                if((lost[i]+1==reserve[j] || lost[i]-1==reserve[j]) && (stack1[stack1.size()-1]!=lost[i] && stack2[stack2.size()-1]!=reserve[j])){
                        answer++;
                        stack1.push_back(lost[i]);
                        stack2.push_back(reserve[j]);
                    }
            }
        }
    }
    return answer;
}