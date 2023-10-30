# 프로그래머스 Lv1 달리기 경주

def solution(players, callings):
    # 각 선수 이름을 딕셔너리의 키로 사용하고, 그 선수의 인덱스를 해당 키에 대응하는 값으로 설정
    player_index = {player: idx for idx, player in enumerate(players)}
    for calling in callings:
        calling_index = player_index[calling]
    
        if calling_index > 0:
            # 선수의 위치를 갱신
            players[calling_index], players[calling_index - 1] = players[calling_index - 1], players[calling_index]        
            player_index[calling], player_index[[players[calling_index]]] = calling_index - 1, calling_index
    return players

players = ["mumu", "soe", "poe", "kai", "mine"]	
callings = ["kai", "kai", "mine", "mine"]	

result = solution(players, callings)
print(result)
