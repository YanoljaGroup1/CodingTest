function solution(n, m, section) {
  let answer = [];
  let a = 0;
  let b = [];
  answer[a] = [];
  for (let i = 1; i <= n; i++) {
    const index = section.indexOf(i);
    if (
      answer[a].length === m ||
      (i - b[a] > m - 1 && i <= section[section.length - 1])
    ) {
      a++;
      answer[a] = [];
    }
    if (index !== -1) {
      answer[a].push(section[index]);
      if (!b[a]) {
        b[a] = section[index];
      }
    }
  }
  return answer;
}
console.log(
  solution(
    20,
    20,
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
  )
);
