function solution(players, callings) {
  let runningPlayers = {};
  let playersNumber = {};

  players.forEach((e, i) => {
    const rank = i + 1;
    runningPlayers[e] = rank;
    playersNumber[rank] = e;
  });

  callings.forEach((e) => {
    const move = playersNumber[runningPlayers[e] - 1];
    playersNumber[runningPlayers[e]] = move;
    playersNumber[runningPlayers[move]] = e;
    runningPlayers[e] -= 1;
    runningPlayers[move] += 1;
  });
  console.log(playersNumber);
  return Object.values(playersNumber);
}

console.log(
  solution(
    ['mumu', 'soe', 'poe', 'kai', 'mine'],
    ['kai', 'kai', 'mine', 'mine']
  )
);
