if __name__ == "__main__":

    # 거스름돈 액수 변수
    n = int(input())

    # 거스름돈 동전 개수 측정하는 변수
    cnt = 0

    while True:

        # 만약 5로 나누어 떨어지면, 개수 세고 출력
        if n % 5 == 0:
            cnt += n // 5
            print(cnt)
            break
        # 만약 5로 나누어 떨어지지 않는다면, 추가 작업 실행
        else:

            # 2원 동전을 하나 사용
            n -= 2
            cnt += 1

        if n < 0:
            print(-1)
            break