print("\033c")
class Person():
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def __str__(self):
        return(f"YO {self.name}")

class Student(Person):
    # def __init__(self,name,age):
    #     Person.__init__(self,name,age)
    # def __str__(self):
    #     return(f"THis is nice {self.name}")
    pass
p1 = Student("Timon","18")
print(p1)

