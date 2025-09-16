import sys
input = sys.stdin.readline

if __name__ == "__main__":
    N = int(input())

    string = [int(input()) for _ in range(N)]

    string.sort()

    answer = 0

    for i in range(N):
        weight = string[i] * (N - i)
        answer = max(answer, weight)

    print(answer)