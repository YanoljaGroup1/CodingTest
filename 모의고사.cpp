#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> num1 = {1,2,3,4,5}; // 1번 찍기 2000
    vector<int> num2 = {2,1,2,3,2,4,2,5}; // 2번 찍기 1250
    vector<int> num3 = {3,3,1,1,2,2,4,4,5,5}; // 3번 찍기 1000
    vector<vector<int>> container; // num 배열 저장
    vector<int> cntcontainer;
    for(int i=0;i<1999;i++){
        for(int j=0;j<5;j++){
            num1.push_back(num1[j]);
        }
    }
    for(int i=0;i<1249;i++){
        for(int j=0;j<8;j++){
            num2.push_back(num2[j]);
        }
    }
    for(int i=0;i<999;i++){
        for(int j=0;j<10;j++){
            num3.push_back(num3[j]);
        }
    }
    container.push_back(num1);
    container.push_back(num2);
    container.push_back(num3);
    for(int i=0;i<container.size();i++){
        int cnt=0;
        for(int j=0;j<answers.size();j++){
            if(container[i][j]==answers[j]){
                cnt++;
            }
        }
        cntcontainer.push_back(cnt);
    }
    int maxi = -1;
    for(int i=0;i<cntcontainer.size();i++){
        if(maxi<cntcontainer[i]){
            maxi=cntcontainer[i];
        }
    }
    for(int i=0;i<cntcontainer.size();i++){
        if(maxi == cntcontainer[i]){
            answer.push_back(i+1);
        }
    }
    return answer;
}