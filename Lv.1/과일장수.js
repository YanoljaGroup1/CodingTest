function solution(k, m, score) {
  var answer = 0;
  let box = [];    

  // 배열을 오름차순으로 정렬
  const array = score.sort((a,b) => b - a)

  // 오름차순된 배열을 m개씩 자르기
  for(i = 0; i < array.length; i += m){
    box.push(array.slice(i, i + m));
  }
 
  // 각 잘라진 배열의 최솟값과 갯수 곱하기
  for(const subArray of box){
      if (subArray.length == m){
      const minValue = Math.min(...subArray);
      answer += minValue * m
    }
  }
  
  return answer;
}

solution(3,4,[4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2])


