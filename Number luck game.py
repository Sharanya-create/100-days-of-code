
import random as r
me=0;
oponent=0;
count=-1
print("***NUMBER LUCK GAME***")
print("Select a number between 10 to 100 the one with greater number gets 1 point. There are 10 rounds lets see who wins at last!!")
print("Luck matters a lot!! Your oponent is computer and is highly random!!")
while True:
  count=count+1
  if(count==10):break;
  inpt=int(input(''))

  n=r.randint(10,100)
  print("oponent:",n)
  if inpt>n:
    me=me+1
  elif n>inpt:
    oponent=oponent+1
  else:
    oponent=oponent+1
    me=me+1
if oponent>me:
  print("You Lose!!,oponent:",oponent,"you:",me)
else:
  print("You Won!!,oponent:",oponent,"you:",me)


