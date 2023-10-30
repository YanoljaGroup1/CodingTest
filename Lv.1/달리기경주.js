function solution(players, callings) {
  let answer = players.slice();

  for (let i = 0; i < callings.length; i++) {
      const calling = callings[i];
      const index = answer.indexOf(calling);

      if (index > 0) {
          answer.splice(index, 1); 
          answer.unshift(calling); 
      }
  }

  return answer;
}