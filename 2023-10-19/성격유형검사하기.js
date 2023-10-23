function solution(survey, choices) {
  let answer = '';
  let choice = { R: 0, T: 0, C: 0, F: 0, J: 0, M: 0, A: 0, N: 0 };

  for (let i = 0; i < choices.length; i++) {
    if (choices[i] > 4) {
      choice[survey[i][1]] += choices[i] - 4;
    } else if (choices[i] < 4) {
      choice[survey[i][0]] += Math.abs(choices[i] - 4);
    }
  }

  for (let i = 0; i < 7; i += 2) {
    if (choice[Object.keys(choice)[i]] > choice[Object.keys(choice)[i + 1]]) {
      answer += Object.keys(choice)[i];
    } else if (
      choice[Object.keys(choice)[i]] < choice[Object.keys(choice)[i + 1]]
    ) {
      answer += Object.keys(choice)[i + 1];
    } else if (
      choice[Object.keys(choice)[i]] === choice[Object.keys(choice)[i + 1]]
    ) {
      if (Object.keys(choice)[i] > Object.keys(choice)[i + 1]) {
        answer += Object.keys(choice)[i + 1];
      } else {
        answer += Object.keys(choice)[i];
      }
    }
  }
  return answer;
}
