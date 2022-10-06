T = int(input())

for i in range(T):
    N = int(input())

    sum = 1
    j = 1 
    while j <= N:
        sum = sum * j
        j+=1 
    
    count = 0
    k = 10
    while True:
        if sum % k == 0:
            count += 1
            k = k * 10
        else:
            break
    
    print(count)