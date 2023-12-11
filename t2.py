# def testADD(a:int = 1, b:int = 3):
#     return a + b

# print(testADD())

def testADD(a:int = 10, b:int = 20):
    return a, a+b

a, b = testADD(38, 90)

print(a, b)