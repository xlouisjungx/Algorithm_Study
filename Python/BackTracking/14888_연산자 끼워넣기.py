import sys
from itertools import permutations

input = sys.stdin.readline

def calc(nums, ops):
    result = nums[0]
    for i, op in enumerate(ops):
        if op == '+':
            result += nums[i+1]
        elif op == '-':
            result -= nums[i+1]
        elif op == '*':
            result *= nums[i+1]
        else:
            if result < 0:
                result = -(-result // nums[i+1])
            else:
                result //= nums[i+1]
    return result

N = int(input())
nums = list(map(int, input().split()))
plus, minus, mul, div = map(int, input().split())

ops = []
ops += ['+'] * plus
ops += ['-'] * minus
ops += ['*'] * mul
ops += ['/'] * div

mx = -10**18
mn = 10**18

for case in set(permutations(ops, len(ops))):
    val = calc(nums, case)
    mx = max(mx, val)
    mn = min(mn, val)

print(mx)
print(mn)