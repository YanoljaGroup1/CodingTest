# # 프로그래머스 Lv1 공원 산책

def solution(park, routes):
    answer = []

    # 가로 및 세로 길이 구하기
    wid = len(park[0]) - 1
    hei = len(park) - 1
    
    # park 안의 문자열 하나씩 자르기
    for x in park:
        answer.append(list(x))
    
    for row in answer:
        if 'S' in row:
            index_first = row.index('S')
            index_second = answer.index(row)
            break     
    
    # S의 행, 열 인덱스값 구하기
    a, b = index_second, index_first
    
    for item in routes:
        key, value = item.split()
        value = int(value) 
        cnt = 0

        for i in range(value):
            if key == 'E':
                if b + 1 <= wid and park[a][b+1] != 'X':
                    b += 1
                    cnt += 1
                else:
                    b -= cnt
                    break
            
            if key == 'W':
                if b - 1 >= 0 and park[a][b-1] != 'X':
                    b -= 1
                    cnt += 1
                else:
                    b += cnt
                    break
            
            if key == 'S':
                if a + 1 <= hei and park[a+1][b] != 'X':
                    a += 1
                    cnt += 1
                else:
                    a -= cnt
                    break
                    
            if key == 'N':
                if a -1 >= 0 and park[a-1][b] != 'X':
                    a -= 1
                    cnt += 1
                else:
                    a += cnt
                    break
                
    return [a,b]

park = 	["SOO", "OXX", "OOO"]
routes = ["E 2","S 3","W 1"]
result = solution(park, routes)
print(result)