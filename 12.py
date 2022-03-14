import math
def fun(x, eps):
    kol = 0
    while True:
        f = 4/(3-x) - 4*math.cos(x)
        df = 4/((3-x)**2) + 4*math.sin(x)
        x = x - f / df
        kol += 1
        if (abs(f) < eps or kol > 50000):
            break
    print("Количество операций " + str(kol))
    return x
print (fun(-1 , 0.00001))  