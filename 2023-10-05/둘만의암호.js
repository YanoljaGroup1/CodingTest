const s = 'aukks';
const skip = 'wbqd';
const index = 5;

function solution(s, skip, index) {
  let answer = '';
  const skipIndex = skip.split('');
  const alphabet = [
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
    'g',
    'h',
    'i',
    'j',
    'k',
    'l',
    'm',
    'n',
    'o',
    'p',
    'q',
    'r',
    's',
    't',
    'u',
    'v',
    'w',
    'x',
    'y',
    'z',
  ].filter((e) => !skipIndex.includes(e));
  s.split('').forEach((e) => {
    let setAlphabet = alphabet.indexOf(e);
    for (let i = 1; i <= index; i++) {
      setAlphabet = setAlphabet + 1;
      if (setAlphabet >= alphabet.length) {
        setAlphabet = 0;
      }
    }
    answer += alphabet[setAlphabet];
  });
  return answer;
}

console.log(solution(s, skip, index));
