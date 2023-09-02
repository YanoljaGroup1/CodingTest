function solution(k, m, score) {
  var answer = 0;
  let box = [];    

  // �迭�� ������������ ����
  const array = score.sort((a,b) => b - a)

  // ���������� �迭�� m���� �ڸ���
  for(i = 0; i < array.length; i += m){
    box.push(array.slice(i, i + m));
  }
 
  // �� �߶��� �迭�� �ּڰ��� ���� ���ϱ�
  for(const subArray of box){
      if (subArray.length == m){
      const minValue = Math.min(...subArray);
      answer += minValue * m
    }
  }
  
  return answer;
}

solution(3,4,[4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2])


