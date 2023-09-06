#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
    int x;
    char ch;
};
vector<Node> node;
bool compare(Node a, Node b){
    if(a.ch==b.ch){
        return a.x<b.x;
    }
    return a.x<b.x;
};
void run(char ch, string str){
    int a=0;
    while(1){
        a=str.find(ch,a+1);
        if(a==-1) break;
        if(ch=='S'){
            node.push_back({a,ch});
        }
        else if(ch=='D'){
            node.push_back({a,ch});
        }
        else if(ch=='T'){
            node.push_back({a,ch});
        }
        else if(ch=='*'){
            node.push_back({a,ch});
        }
        else{
            node.push_back({a,ch});
        }
    }
};

int solution(string str) {
    // SDT영역, 각 영역 당첨 시 점수에서 1제곱, 2제곱, 3제곱(점수^1, 점수^2, 점수^3)
    // 스타상(*) 당첨 시 해당 점수와 바로 전에 얻은 점수 각 2배로
    // 아차상(#) 당첨 시 해당 점수 마이너스
    // 스타상(*)이 처음에 나오면 첫 번째 스타상(*) 점수만 2배
    // 스타상(*)의 효과는 다른 스타상(*)의 효과와 중첩 가능, 중첩된 스타상(*) 점수는 4배
    // 스타상(*)의 효과와 아차상(#)의 효과는 중첩 가능, 아차상(#)의 점수는 -2배
    // 점수는 0~10 사이
    vector<int> res;
    int answer = 0;
    char container[5]={
        'S','D','T','*','#'
    };
    for(int i=0;i<5;i++){
        run(container[i],str);
    }
    sort(node.begin(), node.end(), compare);
    vector<int> rst;
    int idx=0;
    int scnt=0;
    int dcnt=0;
    int tcnt=0;
    int starcnt=0;
    int achacnt=0;
    int sum=0;
    for(int i=0;i<node.size();i++){
        for(int j=0;j<str.length();j++){
            // 숫자 분리
            if(str[j]==node[i].ch && j==node[i].x){
                // rst.push_back(str.substr(idx, j-idx));
                if(str.substr(idx, j-idx)!=""){
                    rst.push_back(stoi(str.substr(idx, j-idx)));
                }
                idx=j+1;
                if(str[j]=='S'){
                    scnt++;
                    continue;
                }
                else if(str[j]=='D'){
                    dcnt++;
                    rst[rst.size()-1]=pow(rst[rst.size()-1],2);
                }
                else if(str[j]=='T'){
                    tcnt++;
                    rst[rst.size()-1]=pow(rst[rst.size()-1],3);
                }
                else if(str[j]=='*'){
                    starcnt++;
                    if(starcnt==1 && achacnt==0 && scnt+dcnt+tcnt==1){
                        rst[0]*=2;
                    }
                    else if(starcnt==1 && achacnt==0 && scnt+dcnt+tcnt==2){
                        rst[0]*=2;
                        rst[1]*=2;
                    }
                    else if(starcnt==1 && achacnt==0 && scnt+dcnt+tcnt==3){
                        rst[1]*=2;
                        rst[2]*=2;
                    }
                    else if(starcnt>1){
                        if(scnt+dcnt+tcnt==2){
                            rst[0]*=2;
                            rst[1]*=2;
                        }
                        else{
                            rst[1]*=2;
                            rst[2]*=2;
                        }
                    }
                    else if(achacnt>0 && starcnt==1){
                        if(scnt+dcnt+tcnt==2){
                            rst[0]*=2;
                            rst[1]*=2;
                        }
                        else{
                            rst[1]*=2;
                            rst[2]*=2;
                        }
                    }
                }
                else{
                    if(scnt+dcnt+tcnt==1) rst[0]*=-1;
                    else if(scnt+dcnt+tcnt==2) rst[1]*=-1;
                    else rst[2]*=-1;
                    achacnt++;
                }
            }
        }
    }
    for(int i=0;i<rst.size();i++){
        sum+=rst[i];
        cout<<rst[i]<<endl;
    }
    return sum;
    
}