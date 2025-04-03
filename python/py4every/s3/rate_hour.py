try:
    hr = int(input('Enter hour: '))
except:
    print('Only enter integer!')
    hr = -1

try:
    rt = float(input('Enter rate per hour: '))
except:
    print('Wrong input!')
    rt = -1

if hr > 0 and rt > 0:
    if hr <= 40:
        print("Pay --> ", round(hr * rt, 2))
    else:
        pay = 40 * rt;
        pay += (hr % 40) * (rt * 1.5)
        print('Pay --> ', round(pay, 2))
else:
    if hr < 0:
        print("Hours is wrong type")
    if rt < 0: print("Rate is wrong")

