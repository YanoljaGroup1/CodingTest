function solution(answers) {
  let correcter = [];
  let answer = {
    1: 0,
    2: 0,
    3: 0,
  };
  let max = [];
  const studentAnswers = [
    [1, 2, 3, 4, 5],
    [2, 1, 2, 3, 2, 4, 2, 5],
    [3, 3, 1, 1, 2, 2, 4, 4, 5, 5],
  ];
  for (let i = 0; i < 3; i++) {
    let a = 0;
    let b = 0;
    answers.forEach((e, index) => {
      if (a > studentAnswers[i].length - 1) {
        a = 0;
      }
      if (e === studentAnswers[i][a]) {
        b++;
      }
      a++;
    });
    max.push(b);
    answer[i + 1] = b;
  }
  max = max.sort((a, b) => b - a);
  for (const key in answer) {
    if (answer[key] === max[0]) {
      const a = parseInt(key);
      correcter.push(a);
    }
  }
  return correcter;
}
