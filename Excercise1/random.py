
import random
n = 50000
fp = open("random_50000.txt","w")
fp.write(str(n)+" ")  
for i in range(1,n):
    x = random.random()
    fp.write(str(int(x*n))+" ")  
x = random.random()
fp.write(str(int(x*n))+" ")  
fp.close()
#5   4e-06
#10  5e-06
#50  6e-06
#100 8e-06
#200 1e-05
