#3,5,6,9,10,12,15
import time
start = time.time()
def brute_way():
    mos=mus=pos=a=0
    for i in range(1,1000):
        a += i
    for i in range(3,1000,3):
        mos = mos + i
    for i in range(5,1000,5):
        mus = mus + i
    for i in range(15,1000,15):
        pos = pos +i
    return(mos+mus-pos)   
print(brute_way())    
end = time.time()
print("The time of execution of above program is :",
      (end-start) * 10**3, "ms")   
def gauss_way(n):
    return 3*int((n-1)/3)*(int((n-1)/3)+1)/2+5*int((n-1)/5)*(int((n-1)/5)+1)/2-15*int((n-1)/15)*(int((n-1)/15)+1)/2
#print(int(gauss_way(100)))

