#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    vector<int> container(babbling.size(),0);
    int answer = 0;
    string speak[4]={
        "aya","ye","woo","ma"
    };
    for(int i=0;i<babbling.size();i++){
        string check;
        vector<string> stack;
        for(int j=0;j<babbling[i].size();j++){
            check+=babbling[i][j];
            for(int k=0;k<4;k++){
                if(check==speak[k]){
                    if(stack.size()==0){
                        stack.push_back(check);
                        container[i]=1;
                        check="";
                    }
                    else{
                        if(stack[stack.size()-1]==check){
                            container[i]=0;
                            break;
                        }
                        else{
                            stack.push_back(check);
                            container[i]=1;
                            check="";
                        }
                    }
                }
            }
            if(check!="") container[i]=0;
        }
        
    }
    for(int i=0;i<container.size();i++){
        answer+=container[i];
    }
    return answer;
}