const keymap = ['ABACD', 'BCEFD'];
const targets = ['ABCD', 'AABB', 'ASA'];

function solution(keymap, targets) {
  let answer = [];
  targets.forEach((e) => {
    let targetWord = e.split('');
    let sumTry = 0;
    for (let i = 0; i < targetWord.length; i++) {
      let minTry = 0;
      keymap.forEach((e) => {
        let key = e.split('').indexOf(targetWord[i]);
        if (key > -1) {
          if (minTry !== 0) {
            if (key + 1 < minTry) {
              minTry = key + 1;
            }
          } else {
            minTry = key + 1;
          }
        }
      });
      if (minTry === 0) {
        sumTry = -1;
        break;
      } else {
        sumTry = sumTry + minTry;
      }
    }
    answer.push(sumTry);
  });
  return answer;
}

console.log(solution(keymap, targets));
