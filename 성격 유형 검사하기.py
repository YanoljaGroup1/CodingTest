# s = list(map(str, input().split()))
# choices = list(map(int, input().split()))

# char_arr = []
# score_arr = []

# for i in range(len(s)):
#         sep = list(s[i])
#         if choices[i] == 1:
#             char_arr.append(sep[0])
#             score_arr.append(3)
#         elif choices[i] == 2:
#             char_arr.append(sep[0])
#             score_arr.append(2)
#         elif choices[i] == 3:
#             char_arr.append(sep[0])
#             score_arr.append(1)
#         elif choices[i] == 4:
#             continue
#         elif choices[i] == 5:
#             char_arr.append(sep[1])
#             score_arr.append(1)
#         elif choices[i] == 6:
#             char_arr.append(sep[1])
#             score_arr.append(2)
#         else:
#             char_arr.append(sep[1])
#             score_arr.append(3)
            
# # char_score = []

# # arr = ["R", "T", "C", "F", "J", "M", "A", "N"]

# # for c in char_arr:

# winner_arr = []

# for c in char_arr:
#     if c == 'R' or c == 'T':
#         if c == 'R':
#             if 'T' in char_arr:
#                 r_index = char_arr.index("R")
#                 t_index = char_arr.index("T")
#                 r_score = score_arr[r_index]
#                 t_score = score_arr[t_index]
#                 if r_score >= t_score:
#                     winner_arr.append("R")
#                 else:
#                     winner_arr.append("T")
#             else:
#                 winner_arr.append("R")
#         else: # if c == 'T'
#             if 'R' in char_arr:
#                 r_index = char_arr.index("R")
#                 t_index = char_arr.index("T")
#                 r_score = score_arr[r_index]
#                 t_score = score_arr[t_index]
#                 if r_score >= t_score:
#                     winner_arr.append("R")
#                 else:
#                     winner_arr.append("T")
#             else:
#                 winner_arr.append("T")
#     elif c == 'C' or c == 'F':
#         if c == 'C':
#             if 'F' in char_arr:
#                 c_index = char_arr.index("C")
#                 f_index = char_arr.index("F")
#                 c_score = score_arr[r_index]
#                 f_score = score_arr[t_index]
#                 if c_score >= f_score:
#                     winner_arr.append("C")
#                 else:
#                     winner_arr.append("F")
#             else:
#                 winner_arr.append("C")
#         else: # if c == 'T'
#             if 'C' in char_arr:
#                 c_index = char_arr.index("C")
#                 f_index = char_arr.index("F")
#                 c_score = score_arr[r_index]
#                 f_score = score_arr[t_index]
#                 if c_score >= f_score:
#                     winner_arr.append("C")
#                 else:
#                     winner_arr.append("F")
#             else:
#                 winner_arr.append("F")
#     elif c == 'J' or c == 'M':
#         if c == 'J':
#             if 'M' in char_arr:
#                 j_index = char_arr.index("J")
#                 m_index = char_arr.index("M")
#                 j_score = score_arr[j_index]
#                 m_score = score_arr[j_index]
#                 if j_score >= m_score:
#                     winner_arr.append("J")
#                 else:
#                     winner_arr.append("M")
#             else:
#                 winner_arr.append("J")
#         else: # if c == 'T'
#             if 'J' in char_arr:
#                 j_index = char_arr.index("J")
#                 m_index = char_arr.index("M")
#                 j_score = score_arr[j_index]
#                 m_score = score_arr[m_index]
#                 if j_score >= m_score:
#                     winner_arr.append("J")
#                 else:
#                     winner_arr.append("M")
#             else:
#                 winner_arr.append("M")
#     elif c == 'A' or c == 'N':
#         if c == 'A':
#             if 'N' in char_arr:
#                 a_index = char_arr.index("A")
#                 n_index = char_arr.index("N")
#                 a_score = score_arr[a_index]
#                 n_score = score_arr[n_index]
#                 if a_score >= n_score:
#                     winner_arr.append("A")
#                 else:
#                     winner_arr.append("N")
#             else:
#                 winner_arr.append("A")
#         else: # if c == 'T'
#             if 'A' in char_arr:
#                 a_index = char_arr.index("A")
#                 n_index = char_arr.index("N")
#                 a_score = score_arr[a_index]
#                 n_score = score_arr[n_index]
#                 if a_score >= n_score:
#                     winner_arr.append("A")
#                 else:
#                     winner_arr.append("N")
#             else:
#                 winner_arr.append("N")

# new_arr= list(set(winner_arr)) 

# # 배열 안에 원소가 없을 경우(동점이거나 나오지 않았을 때)
# if 'R' not in new_arr and 'T' not in new_arr:
#     new_arr.append('R')
# if 'C' not in new_arr and 'F' not in new_arr:
#     new_arr.append('C')
# if 'J' not in new_arr and 'M' not in new_arr:
#     new_arr.append('J')
# if 'A' not in new_arr and 'N' not in new_arr:
#     new_arr.append('A')
    
# answer = []
    
# if 'R' in new_arr:
#     answer.append('R')
# if 'T' in new_arr:
#     answer.append('T')
# if 'C' in new_arr:
#     answer.append('C')
# if 'F' in new_arr:
#     answer.append('F')
# if 'J' in new_arr:
#     answer.append('J')
# if 'M' in new_arr:
#     answer.append('M')
# if 'A' in new_arr:
#     answer.append('A')
# if 'N' in new_arr:
#     answer.append('N')    
    
# print(''.join(answer)) 