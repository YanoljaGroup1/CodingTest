// 약수 구하는 함수
function findDivisors(n) {
  const divisors = [];
  for (let i = 1; i <= n; i++) {
    if (n % i === 0) {
      divisors.push(i);
    }
  }
  return divisors;
}

function solution(number, limit, power) {
   let result = 0;
    for (let i = 1; i <= number; i++) {
      const divisors = findDivisors(i).length;
      if(divisors <= limit){
       result += divisors
      } else {
      result += power
      }
    }
   return result;
}


solution(5,3,2)

// 타임에러