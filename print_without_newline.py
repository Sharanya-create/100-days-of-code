N=int(input(""))
i=1

l=list()
while True:
    if i>N:break;
    l.append(i)
    i=i+1
k="0" 
for j in l:
    j=str(j)
    k=k+j
print(k[1:])

#or
#N=int(input(""))
#i=1

#l=list()
#while True:
#    if i>N:break;
#    l.append(i)
#    i=i+1
#for j in l:
 #   print(j,end="")
