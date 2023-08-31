#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int maxi = nums.size()/2;
    vector<int> stack;
    sort(nums.begin(), nums.end()); //오름차순
    for(int i=0;i<nums.size();i++){
        if(stack.size()==0){
            stack.push_back(nums[i]);
        }
        else{
            if(stack[stack.size()-1]!=nums[i]){
                if(stack.size()<maxi)
                    stack.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
    }
    return stack.size();
}