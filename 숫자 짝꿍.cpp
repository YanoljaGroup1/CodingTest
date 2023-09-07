#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    vector<int> arr(10,0);
    string answer = "";
    if(X.length()>=Y.length()){
        swap(X,Y);
    }
    for(int i=0;i<X.length();i++){
        arr[X[i]-'0']++;
    }
    for(int i=0;i<Y.length();i++){
        if(arr[Y[i]-'0']<1) continue;
        else{
            answer+=Y[i];
            arr[Y[i]-'0']--;
        }
    }
    if(answer.length()==0) answer="-1";
    else if(answer[0]=='0') answer="0";
    else{
        sort(answer.begin(), answer.end(),greater<char>());
    }
    return answer;
}