str=input('')
str1=[char for char in str]
distinct=list()
distinct.append(str1[0])
count=1
found=1
i=0
for val in str1:
    if i==0:
        i=i+1
        continue
    else:
        for itter in distinct:
            if val!=itter:
                found=0
                continue
            else:
                found=1
                break
        if found==0:
            distinct.append(val)
            count=count+1

print(count)
