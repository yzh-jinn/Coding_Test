'''
class animal:
    def __init__(self, animal_type):
        self.type = animal_type
        if animal_type == "Human":
            print("{} is animal too ! ".format(type));
        else:
            self.type = animal_type
            print("Animal {} is constructed!".format(type))

    def display(self):
        if self.animal_type == "Human":
            print("Human is animal")
        else:
            print("{} is not Human!".format(type))


class people(animal):
    def say(self, name, age, year, sex):
        print("My name is {}, I'm {} years old, I'm born in {}\
                , I'm a {}.".format(self.name, self.age, self.year, self.sex))


p1 = people("Human")
p2 = animal("Bird")
print(p1.display(), p1.say("Margen", 12, 2011, "Girl"))
print(p2.display(), typ2(p2))
'''


class Animal:
    def __init__(self, animal_type):
        self.type = animal_type
        if animal_type == "Human":
            print("{} is also an animal!".format(animal_type))
        else:
            print("Animal {} is constructed!".format(animal_type))

    def display(self):
        if self.type == "Human":
            print("Human is an animal")
        else:
            print("{} is not a Human!".format(self.type))


class People(Animal):
    def say(self, name, age, year, sex):
        print("My name is {}, I'm {} years old, I was born in {}, I'm a {}.".format(name, age, year, sex))


p1 = People("Human")
p1.display()
p1.say("Margen", 12, 2011, "Girl")

p2 = Animal("Bird")
p2.display()
