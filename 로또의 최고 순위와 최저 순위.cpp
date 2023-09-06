#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zerocnt=0;
    int correctcnt=0;
    for(int i=0;i<lottos.size();i++){
        if(lottos[i]==0) zerocnt++;
    }
    for(int i=0;i<lottos.size();i++){
        for(int j=0;j<win_nums.size();j++){
            if(lottos[i]==win_nums[j]) correctcnt++;
        }
    }
    int totalcnt = correctcnt+zerocnt;
    if(totalcnt==6){
        answer.push_back(1);
        if(zerocnt==6) answer.push_back(6);
        else if(zerocnt==5) answer.push_back(6);
        else if(zerocnt==4) answer.push_back(5);
        else if(zerocnt==3) answer.push_back(4);
        else if(zerocnt==2) answer.push_back(3);
        else if(zerocnt==1) answer.push_back(2);
        else if(zerocnt==0) answer.push_back(1);
    }
    else if(totalcnt==5){
        answer.push_back(2);
        if(zerocnt==5) answer.push_back(6);
        else if(zerocnt==4) answer.push_back(6);
        else if(zerocnt==3) answer.push_back(5);
        else if(zerocnt==2) answer.push_back(4);
        else if(zerocnt==1) answer.push_back(3);
        else if(zerocnt==0) answer.push_back(2);
    }
    else if(totalcnt==4){
        answer.push_back(3);
        if(zerocnt==4) answer.push_back(6);
        else if(zerocnt==3) answer.push_back(6);
        else if(zerocnt==2) answer.push_back(5);
        else if(zerocnt==1) answer.push_back(4);
        else if(zerocnt==0) answer.push_back(3);
    }
    else if(totalcnt==3){
        answer.push_back(4);
        if(zerocnt==3) answer.push_back(6);
        else if(zerocnt==2) answer.push_back(6);
        else if(zerocnt==1) answer.push_back(5);
        else if(zerocnt==0) answer.push_back(4);
    }
    else if(totalcnt==2){
        answer.push_back(5);
        if(zerocnt==2) answer.push_back(6);
        else if(zerocnt==1) answer.push_back(6);
        else if(zerocnt==0) answer.push_back(5);
    }
    else{
        answer.push_back(6);
        if(zerocnt==1) answer.push_back(6);
        else if(zerocnt==0) answer.push_back(6);
    }
    return answer;
}