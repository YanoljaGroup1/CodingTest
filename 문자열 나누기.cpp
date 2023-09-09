#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> check1;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<s.length();i++){
        if(i==s.length()-1){
            // baaa => 2
            // ba / aa
                cnt1++;
                if(cnt1!=cnt2){
                    answer++;
                    return answer;
                }
        }
        if(check1.size()==0){
            check1.push_back(s[i]);
            cnt1++;
        }
        else{
            if(s[i]==check1[check1.size()-1]){
                check1.push_back(s[i]);
                cnt1++;
            }
            else{
                cnt2++;
                if(cnt1==cnt2){
                    answer++;
                    cnt1=0;
                    cnt2=0;
                    check1.clear();
                }
            }
        }
    }
    
    return answer;
}