function solution(answers) {
    const patterns = [
        [1, 2, 3, 4, 5],
        [2, 1, 2, 3, 2, 4, 2, 5],
        [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    ];

    const scores = [0, 0, 0]; 

    for (let i = 0; i < answers.length; i++) {
        for (let j = 0; j < 3; j++) {
            const pattern = patterns[j];
            if (answers[i] === pattern[i % pattern.length]) {
                scores[j]++;
            }
        }
    }

    const maxScore = Math.max(...scores);
    const result = [];

    for (let i = 0; i < scores.length; i++) {
        if (scores[i] === maxScore) {
            result.push(i + 1);
        }
    }

    return result;
}

const answers = [1, 2, 3, 4, 5];
const result = solution(answers);
