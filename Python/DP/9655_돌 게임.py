# 입력받은 수가 홀수이면 무조건 상근이가 이김.
# 그와 반대로 입력받은 수가 짝수이면 무조건 창영이가 이김.

N = int(input())

if N % 2 == 0: print("CY")
else: print("SK")