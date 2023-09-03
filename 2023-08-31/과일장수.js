function solution(k, m, score) {
  let answer = 0;
  let boxs = score.length / m;
  let box = [];
  let apples = score.sort((a, b) => b - a);
  apples.forEach((item, index) => {
    if (box.length <= boxs) {
      if (index % m === 0) {
        box.push([]);
      }
      box[box.length - 1].push(item);
    }
  });
  box = box.filter((e) => e.length === m);
  box.forEach((e) => {
    e.sort((a, b) => a - b);
    answer += e[0] * e.length;
  });
  return answer;
}
console.log(solution(3, 4, [1, 2, 3, 1, 2, 3, 1]));
