T = int(input())
for i in range (T):
    str = input()
    str1 = input()

    result = int(str.count(str1))

    if(result == 0):
        print(str1,"is not present")
    else:
        print("Occurrence of ",str1," in ",str,"= ",result)
    
