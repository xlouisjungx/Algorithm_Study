def find_min(num):

    result = num[0]

    for i in num:
        if result > i:
            result = i

    return result

def find_max(num):
    
    result = num[0]

    for i in num:
        if result < i:
            result = i

    return result

if __name__ == "__main__":
    
    N = int(input())

    num = list(map(int, input().split()))
    
    #min_num = min(num)
    #max_num = max(num)

    min_num = find_min(num)
    max_num = find_max(num)

    print(min_num, max_num)