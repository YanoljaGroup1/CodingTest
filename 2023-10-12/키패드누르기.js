function solution(numbers, hand) {
  let answer = '';
  let currentL = '*';
  let currentR = '#';
  onlyL = [1, 4, 7, '*'];
  onlyR = [3, 6, 9, '#'];

  function findKey(key) {
    let keypad = [
      [1, 2, 3],
      [4, 5, 6],
      [7, 8, 9],
      ['*', 0, '#'],
    ];
    let location = [];
    keypad.map((e, i) => {
      e.map((number, j) => {
        if (number === key) {
          location = [i, j];
        }
      });
    });
    return location;
  }

  numbers.map((e) => {
    if (onlyL.indexOf(e) > -1) {
      currentL = e;
      answer += 'L';
    } else if (onlyR.indexOf(e) > -1) {
      currentR = e - 2;
      answer += 'R';
    } else {
      if (currentL === '*' && currentR === '#' && e === 0) {
        hand === 'right'
          ? ((currentR = e), (answer += 'R'))
          : ((currentL = e), (answer += 'L'));
      } else {
        const l = findKey(currentL);
        const r = findKey(currentR);
        const target = findKey(e);
        let rr = Math.abs(r[0] - target[0]) + Math.abs(r[1] - target[1]);
        let ll = Math.abs(l[0] - target[0]) + Math.abs(l[1] - target[1]);
        if (ll === rr) {
          hand === 'right'
            ? ((currentR = e), (answer += 'R'))
            : ((currentL = e), (answer += 'L'));
        } else if (ll > rr) {
          answer += 'R';
          currentR = e;
        } else {
          answer += 'L';
          currentL = e;
        }
      }
    }
  });
  return answer;
}
