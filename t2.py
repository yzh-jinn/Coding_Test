class Student:
    pass

std_1 = Student()

def main():
    print(type(Student))
    print("----")
    print("id:{}".format(id(std_1)))
    print(hex(id(std_1)))






if __name__ == '__main__':
    main()
# def calculate(operation: str, n1: int, n2: int):
#     def add(n1, n2):
#         return n1 + n2

#     def sub(n1, n2):
#         return n1 - n2

#     def div(n1, n2):
#         if n2 == 0:
#             return "Division by zero is not allowed"
#         return n1 / n2

#     def mul(n1, n2):
#         return n1 * n2

#     if operation == 'add':
#         return add(n1, n2)
#     elif operation == 'sub':
#         return sub(n1, n2)
#     elif operation == 'div':
#         return div(n1, n2)
#     elif operation == 'mul':
#         return mul(n1, n2)
#     else:
#         return "Invalid operation"
    

# # f1 = calculate('add', 1, 2)
# f2 = calculate()

# f2('sub', 2, 1)