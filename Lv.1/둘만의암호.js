function solution(s,skip,index) {
  const strArr = 'abcdefghijklmnopqrstuvwxyz'.split('');
  const skipArr = skip.split(''); 
  let ans = ''
  const newStr = strArr.filter(e=> skipArr.indexOf(e) === -1)
  const newStrLength = newStr.length;
  s.split('').map(e=> {
    let idx = newStr.indexOf(e)
    idx += index
    while(idx > newStrLength - 1){
      idx -= newStrLength
    }
    ans += newStr[idx]
  })
  return ans
}
