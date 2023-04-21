#判断数字是否为质数
def is_prime(num):
    if num < 2:
        return False
    for i in range(2,num):
        if num % i == 0:
            return False
            break
            #break跟return一样
            #return跟break不一样
            #break跟return一样
    return True

print(is_prime(4))
