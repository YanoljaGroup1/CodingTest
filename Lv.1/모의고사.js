function solution(answers) {
    var answer = [];
    var a1 = [1, 1, 3, 3, 2];
    var a2 = [2, 1, 2, 4, 5, 1, 2, 3];
    var a3 = [3, 2, 3, 1, 2, 1, 2, 3, 4, 5];

    var a1c = answers.filter((a,i)=> a === a1[i%a1.length]);
    var a2c = answers.filter((a,i)=> a === a2[i%a2.length]);
    var a3c = answers.filter((a,i)=> a === a3[i%a3.length]);
    console.log(a1c, a2c, a3c)
    // answer의 갯수에 따른 인덱스 까지만 비교가 가능하므로 a1, a2, a3 의 길이가 그 보다 더 컸을 때 정확한 비교가 어려움
    var max = Math.max(a1c,a2c,a3c);

    if (a1c === max) {answer.push(1)};
    if (a2c === max) {answer.push(2)};
    if (a3c === max) {answer.push(3)};

    console.log(answer);
    return answer;
}

solution([1,2,3,4,5])