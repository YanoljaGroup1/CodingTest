function solution(new_id) {
  let id = new_id.toLowerCase();
  id = id.replace(/[^a-zA-Z0-9-_\.]/g, '');
  id = id.replace(/\.{2,}/g, '.');
  id = id.replace(/^\.|\.$/g, '');
  if (id.length <= 0) {
    id = 'a';
  }
  if (id.length >= 16) {
    id = id.substr(0, 15);
    id = id.replace(/\.$/, '');
  }
  while (id.length < 3) {
    id += id[id.length - 1];
  }
  return id;
}
