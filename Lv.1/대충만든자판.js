function solution(keymap, targets) {
  let answer = [];
  let pressKey = 0;

  targets.forEach((x) => {
    for (let i = 0; i < x.length; i++) {
      let count = 100;
      keymap.forEach((key) => {
        let idx = key.indexOf(x[i])

        if (idx > -1) {
          count = Math.min(count, idx + 1)
        }

      })
      pressKey += count
    }
    answer.push(pressKey)
    console.log(pressKey)
    pressKey = 0;
  })
  answer = answer.map(x => {
    if (x == 100) {
      x = -1
    }
    return x
  })
  return answer;
}

solution(["AA"],["B"])