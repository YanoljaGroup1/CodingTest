#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int path[100];

vector<int> container;

void abc(int lev, int* vect, int size, int selected) {
    if (selected == 3) {
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < 3; i++) sum += path[i];
        for (int i = 1; i <= sum; i++) {
            if (sum % i == 0) cnt++;
            if (cnt > 2) return;
        }
        container.push_back(sum);
        return;
    }
    
    for (int i = lev; i < size; i++) {
        path[selected] = vect[i];
        abc(i + 1, vect, size, selected + 1);
        path[selected] = 0;
    }
}

int solution(vector<int> nums) {
    int answer;
    int* arr = nums.data();
    int size = nums.size();
    abc(0, arr, size, 0);
    return container.size();
}
