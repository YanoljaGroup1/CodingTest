function solution(ingredient) {
  var answer = 0;
  let makeBurger = [];
  ingredient.map((e) => {
    makeBurger.push(e);
    if (makeBurger.length >= 4) {
      const ingIndex = makeBurger.length - 4;
      if (
        makeBurger[ingIndex] === 1 &&
        makeBurger[ingIndex + 1] === 2 &&
        makeBurger[ingIndex + 2] === 3 &&
        makeBurger[ingIndex + 3] === 1
      ) {
        answer += 1;
        makeBurger.splice(ingIndex, 4);
      }
    }
  });
  return answer;
}
