print("\033c")
class Eyo():
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def greeter(self):
        print("Hello my name is "+self.name)
    def __str__(self):
        return f"{self.name}({self.age})"    
p1 = Eyo("Cat","10")
p1.age = 40
del p1.age
# print(p1.name)
# print(p1.age)        
p2 = Eyo("Dog","12")
#print(p1)
print(p2)
p1.greeter()


