function solution(number, limit, power) {
  let answer = 0;
  for (let i = 1; i <= number; i++) {
    let countMeasure = 0;
    for (j = 1; j <= Math.sqrt(i); j++) {
      if (i % j === 0) {
        if (i / j === j) {
          countMeasure++;
        } else {
          countMeasure++;
          countMeasure++;
        }
      }
      if (countMeasure > limit) {
        countMeasure = power;
        break;
      }
    }
    answer += countMeasure;
  }
  return answer;
}

console.log(solution(10, 3, 2));
