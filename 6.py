import math
def f(x):
    return (x**3)-2.56*(x**2)-1.3251*x+4.395006
def fun(a, b, eps):
    kol = 0
    while True:
        c = (a+b)/2
        a1 = ((f(b)-f(c))/(b-c)-(f(c)-f(a))/(c-a))/b-a
        b1 = (f(c)-f(a))/(c-a) + a1*(a-c)
        c1 = f(a)
        if ((a - 2*c1/(b1+math.sqrt(b1**2 - 4*a1*c1))) >= a and (a - 2*c1/(b1+math.sqrt(b1**2 - 4*a1*c1))) <= b):
            x1 = a - 2*c1/(b1+math.sqrt(b1**2 - 4*a1*c1))
        elif ((a - 2*c1/(b1-math.sqrt(b1**2 - 4*a1*c1))) >= a and (a - 2*c1/(b1-math.sqrt(b1**2 - 4*a1*c1))) <= b):
            x1 = a - 2*c1/(b1-math.sqrt(b1**2 - 4*a1*c1))
        if (f(a)*f(x1) < 0):
            b = x1
        elif (f(x1)*f(b) < 0):
            a = x1
        kol += 1
        if (abs(b-a) < eps or kol > 50000):
            break
    print ("Количество операций " + str(kol))
    return a
print (fun(-2, 3, 0.00001))  