def is_prime(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def solution(n):
    array_list = []
    count = 0
    for i in range(2, n+1):
        array_list.append(i)
    for idx in array_list:
        if is_prime(idx):
            count += 1
    return count