def solution(n, lost, reserve):
    answer = 0
    phy = [1 for i in range(n)]
    for i in reserve:
        phy[i-1]+=1
    for i in lost:
        phy[i-1]-=1
    cnt = 0
    for i in range(len(phy)):
        if phy[i] == 0:
            if i-1>=0 and phy[i-1] ==2:
                phy[i-1] = 1
                phy[i]+=1
                cnt+=1
            elif i+1 < len(phy) and phy[i+1] == 2:
                phy[i+1] = 1
                phy[i]+=1
                cnt+=1
        else:
            cnt+=1
                
   #print(phy)
    return cnt