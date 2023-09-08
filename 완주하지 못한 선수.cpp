#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> pa, vector<string> co) {
    string answer="";
    sort(pa.begin(), pa.end());
    sort(co.begin(), co.end());
    if(co.size()==0) return answer+=pa[0];
    for(int i=0;i<pa.size();i++){
        for(int j=i;j<i+1;j++){
            if(pa[i]==co[j]){
                break;
            }
            else{
                answer+=pa[i];
                return answer;
            }
            
        }
    }
    
}