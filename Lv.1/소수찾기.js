function solution(n) {
  let Count = 0;

  for (let num = 2; num <= n; num++) {
    let isTrue = true;
    for (let i = 2; i*i <= num; i++) {
      if (num % i === 0) {
        isTrue = false;
        break;
      }
    }
    if (isTrue) {
      Count++;
    }
  }
  return Count;
}

solution(10)

// 타임에러 해결못함