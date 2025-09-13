def fibonacci(n):
    count_zero = [0] * (n + 2)
    count_one = [0] * (n + 2)

    count_zero[0], count_one[0] = 1, 0
    count_zero[1], count_one[1] = 0, 1
    
    for i in range(2, n+1):
        count_zero[i] = count_zero[i-2] + count_zero[i-1]
        count_one[i] = count_one[i-2] + count_one[i-1]

    return count_zero[n], count_one[n]

if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        N = int(input())
        count_zero, count_one = fibonacci(N)
        print(count_zero, count_one)