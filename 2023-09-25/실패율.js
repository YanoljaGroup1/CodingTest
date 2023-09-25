function solution(N, stages) {
  let answer = [];
  let setNumbers = [];
  for (let i = 0; i < N; i++) {
    setNumbers.push([]);
    const nonClear = stages.filter((e) => e === i + 1).length;
    const clear = stages.filter((e) => e >= i + 1).length;
    setNumbers[i].push(i + 1, nonClear / clear);
  }
  setNumbers.sort((a, b) => b[1] - a[1]);
  setNumbers.forEach((e) => answer.push(e[0]));
  return answer;
}
