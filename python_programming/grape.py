# f = open("thefile.txt","r")
# print(f.readline())
# for x in f:
#     print(x)
# f.close()    

# f = open("thefile.txt","a")
# f.write("Now the file has more info!")
# f.close()

# f = open('test.txt','w')
# f.write('Cool feature') // Append,Write Will create file if it doesnt exist
# f.close() // X will create new else throw error if exits

# Get all factors of n
import math
n = 64
factors = set()
for i in range(1, int(math.sqrt(n)) + 1):
    if n % i == 0:
        factors.add(i)
        factors.add(n // i)
print(factors)
# Permutations
# Travelling Salesman Problem

