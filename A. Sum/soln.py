t = int(input())
i = 0
while i<t:
    i+=1
    [a,b,c] = map(lambda x:int(x),input().split(" ")) # "1 2 3" => ["1","2","3"] => [1,2,3] 
    if a+b==c:
        print("YES")    
    elif a+c==b:
        print("YES")
    elif c+b==a:
        print("YES")
    else:
        print("NO")
