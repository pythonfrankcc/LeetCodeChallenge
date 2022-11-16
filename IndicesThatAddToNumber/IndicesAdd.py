def checkSum(lst,target):
    lst1 = [];
    lstSize = len(lst)
    for i in range(lstSize-1):
        for j in range(i+1, lstSize):
            if (lst[i] + lst[j] == target):
                index1 = lst.index(lst[i])
                #print(index1)
                index2 = lst.index(lst[j])
                lst1.append(index1)
                lst1.append(index2)
                return sorted(lst1)

    return 0
a = checkSum([0, -1, 2, -3, 1],-2)
print(a)
        