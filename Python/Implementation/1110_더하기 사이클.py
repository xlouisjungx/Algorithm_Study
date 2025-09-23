if __name__ == '__main__':
    # 처음 입력 받는 변수
    N = int(input())

    # 새로운 수를 담는 변수
    new_N = 0

    # 사이클 카운수 변수
    cnt = 0

    # 십의 자리를 담는 변수
    Tens_place = 0

    # 일의 자리를 담는 변수
    Ones_place = 0

    # 초기 값 넣어주기
    new_N = N

    while True:

        # 십의 자리와 일의 자리를 계산해줍니다.
        Tens_place = new_N // 10
        Ones_place = (new_N - (Tens_place * 10))

        # 그리고 문제에 나와 있는 규칙을 구현한 로직입니다.
        new_N = (Ones_place * 10) + ((Tens_place + Ones_place) % 10)

        # 계속 돌면서 사이클를 카운트하다가
        cnt += 1

        # 처음과 같은 수가 되면 while문을 빠져나옵니다.
        if N == new_N:
            break

    print(cnt)