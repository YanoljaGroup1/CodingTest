function setTerms(terms) {
  let setTerm = {};
  terms.map((term) => {
    const termSet = term.split(' ');
    setTerm[termSet[0]] = termSet[1];
  });
  return setTerm;
}

function sumDay(day) {
  return parseInt(day[0]) * 10000 + parseInt(day[1]) * 100 + parseInt(day[2]);
}

function solution(today, terms, privacies) {
  let answer = [];
  let current = sumDay(today.split('.'));
  const term = setTerms(terms);
  for (let i = 0; i < privacies.length; i++) {
    let day = privacies[i].split(' ')[0].split('.');
    const termType = privacies[i].split(' ')[1];
    day.splice(1, 1, parseInt(day[1]) + parseInt(term[termType]));
    day.splice(2, 1, parseInt(day[2]) - 1);
    day.splice(0, 1, parseInt(day[0]));
    while (day[1] > 12) {
      day[1] = day[1] - 12;
      day[0] = day[0] + 1;
    }
    if (day[2] === 0) {
      day[2] = 28;
      day[1] = day[1] - 1;
    }
    if (sumDay(day) < current) {
      answer.push(i + 1);
    }
  }
  return answer;
}
