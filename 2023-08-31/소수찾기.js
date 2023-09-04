function solution(n) {
  let answer = [];
  let nums = new Array(n + 1).fill(true);
  nums[0] = nums[1] = false;
  for (let i = 2; i * i <= n; i++) {
    if (nums[i]) {
      for (let j = i * i; j <= n; j += i) {
        nums[j] = false;
      }
    }
  }
  nums = nums.filter((e) => e);
  answer = nums.length;
  return answer;
}
