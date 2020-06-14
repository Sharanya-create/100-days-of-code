
l=list()
ar=list()
x = int(input(''))
y = int(input(''))
z = int(input(''))
n = int(input(''))
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if i+j+k != n :
                l.append(i)
                l.append(j)
                l.append(k)
                
                ar.append(l)
                l=list()
print(ar)
