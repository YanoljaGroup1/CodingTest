function solution(nums) {
  let answer = [];
  let sumNums = [];
  nums = nums.sort((a, b) => a - b);
  for (let i = 0; i < nums.length - 2; i++) {
    for (let j = i + 1; j < nums.length - 1; j++) {
      for (let k = j + 1; k < nums.length; k++) {
        const sumNum = nums[i] + nums[j] + nums[k];
        sumNums.push(sumNum);
      }
    }
  }
  sumNums.forEach((e) => {
    let a = 0;
    for (let i = 2; i < e; i++) {
      if (!(e % i === 0)) {
        a++;
      }
    }
    if (a === e - 2) {
      answer.push(e);
    }
  });
  return answer.length;
}
console.log(solution([1, 2, 7, 6, 4]));
