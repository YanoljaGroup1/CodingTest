function solution(wallpaper) {
  let answer = [];
  let lowY = [50];
  let lowX = [50];
  let highX = [0];
  let highY = [0];
  for (let i = 0; i < wallpaper.length; i++) {
    for (let j = 0; j < wallpaper[i].length; j++) {
      if (wallpaper[i][j] === '#') {
        if (i <= lowY) {
          lowY = [i];
        }
        if (j <= lowX) {
          lowX = [j];
        }
        if (i >= highY) {
          highY = [i + 1];
        }
        if (j >= highX) {
          highX = [j + 1];
        }
      }
    }
  }
  answer = [...lowY, ...lowX, ...highY, ...highX];
  return answer;
}
