import math

a = int(input("Enter the number : "))

maxPrime = 0
while a % 2 == 0:
	maxPrime = 2
	a = a/2	
for i in range(3, int(math.sqrt(a)) + 1, 2):
	while a % i == 0:
		maxPrime = i
		a = a / i
if a > 2:
	maxPrime = a
		
print("The largest prime Factor of number is ",int(maxPrime))