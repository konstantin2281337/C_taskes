import sys
import sympy



def tabl(x, y):
    return x * y




print('', tabl('-', 83), sep='\n')
rejim = int(input('1 - зашифровать    2 - расшифровать    3 - зашифровать <==> расшифровать:  --> '))
print(tabl('-', 83), '', sep='\n')




if rejim == 1:

    print("    Выбрано: 1 - зашифровать", '', tabl('-', 66), sep='\n')
    q = int(input('Введите простое число q --> '))
    print(tabl('-', 66))
    p = int(input('Введите простое число p --> '))
    print(tabl('-', 66), '', '     Генерация открытого ключа:', tabl('-', 66),
          f"Проверяем, являются ли числа {q} и {p} простыми...", sep='\n')


    if sympy.isprime(q) == False or sympy.isprime(p) == False:
        sys.exit("Ошибка... Введённые числа должны быть простыми!")
    else:
        print(f"Числа {q} и {p} являются простыми.")

    print(tabl('-', 66), 'Вычисляем n...', sep='\n')
    n = p * q
    print(f"n = {n}")

    print(tabl('-', 66), 'Вычисляем функцию Эйлера...', sep='\n')
    fi = (p - 1) * (q - 1)
    print(f"Функция Эйлера = {fi}")

    print(tabl('-', 66), 'Выбираем число E...', sep='\n')
    E = 0
    for i in range(2, fi):
        if sympy.isprime(i) == True and fi % i != 0:
            E = i
            print(f"Минимальное число E = {i}", tabl('-', 66), f"Открытый ключ: [{E}, {n}]", tabl('-', 66),sep='\n')
            break


    print('', '     Шифрование:', tabl('-', 66), sep='\n')
    m = int(input('Введите сообщение для зашифровки, которое не превышает n --> '))
    if m >= n:
        sys.exit('Введённое Вами сообщение превышает n , пожалуйста, введите корректные данные!')
    else:
        c = (m ** E) % n
        print(tabl('-', 66), f"Зашифрованное сообщение: {c}", tabl('-', 66), '', sep='\n')


    print('     Генерация закрытого ключа:', tabl('-', 66), 'Выбираем число d...', sep='\n')
    d, count = 0, 0

    while count == 0:
        d += 1
        if (E * d) % fi == 1:
            if d == E:
                continue
            count += 1

    print(f"Минимальное число d = {d}", tabl('-', 66),
          f"Закрытый ключ: [{d};{n}]", tabl('-', 66), '', sep='\n')

    #m = int(input('Введите сообщение для зашифровки, которое не превышает n --> '))  закомментил, т.к. при больших значениях p и q закрытый ключ вычисляется очень долго

    #if m >= n:
        #sys.exit('Введённое Вами сообщение превышает n , пожалуйста, введите корректные данные!')
    #else:
        #c = (m ** E) % n
        #print(tabl('-', 66), f"Зашифрованное сообщение: {c}", tabl('-', 66), sep='\n')








elif rejim == 2:

    print('    Выбрано: 2 - расшифровать', '', '    Дешифрование:', tabl('-', 66), sep='\n')

    c = int(input('Введите сообщения для дешифровки --> '))

    print(tabl('-', 66), '', tabl('-', 66),sep='\n')
    d = int(input('Введите элемент для закрытого ключа: d = '))
    print(tabl('-', 66))
    n = int(input('Введите элемент для закрытого ключа(n > введённое сообщение): n = '))
    print(tabl('-', 66), '', tabl('-', 66), f"Вы ввели закрытый ключ [{d};{n}]", tabl('-', 66), sep='\n')

    if c > n:
        sys.exit("Ошибка! Значение n должно превышать введённое сообщение...")
    else:
        m = (c ** d) % n
        print(f"Расшифрованное сообщение: {m}", tabl('-', 66), sep='\n')









elif rejim == 3:

    print("    Выбрано: 1 - зашифровать", '', tabl('-', 66), sep='\n')
    q = int(input('Введите простое число q --> '))
    print(tabl('-', 66))
    p = int(input('Введите простое число p --> '))
    print(tabl('-', 66), '', '     Генерация открытого ключа:', tabl('-', 66),
          f"Проверяем, являются ли числа {q} и {p} простыми...", sep='\n')

    if sympy.isprime(q) == False or sympy.isprime(p) == False:
        sys.exit("Ошибка... Введённые числа должны быть простыми!")
    else:
        print(f"Числа {q} и {p} являются простыми.")

    print(tabl('-', 66), 'Вычисляем n...', sep='\n')
    n = p * q
    print(f"n = {n}")

    print(tabl('-', 66), 'Вычисляем функцию Эйлера...', sep='\n')
    fi = (p - 1) * (q - 1)
    print(f"Функция Эйлера = {fi}")

    print(tabl('-', 66), 'Выбираем число E...', sep='\n')
    E = 0
    for i in range(2, fi):
        if sympy.isprime(i) == True and fi % i != 0:
            E = i
            print(f"Минимальное число E = {i}", tabl('-', 66), f"Открытый ключ: [{E}, {n}]", tabl('-', 66), sep='\n')
            break

    print('', '     Шифрование:', tabl('-', 66), sep='\n')
    m = int(input('Введите сообщение для зашифровки, которое не превышает n --> '))
    if m >= n:
        sys.exit('Введённое Вами сообщение превышает n , пожалуйста, введите корректные данные!')
    else:
        c = (m ** E) % n
        print(tabl('-', 66), f"Зашифрованное сообщение: {c}", tabl('-', 66), '', sep='\n')

    print('     Генерация закрытого ключа:', tabl('-', 66), 'Выбираем число d...', sep='\n')
    d, count = 0, 0

    while count == 0:
        d += 1
        if (E * d) % fi == 1:
            if d == E:
                continue
            count += 1

    print(f"Минимальное число d = {d}", tabl('-', 66),
          f"Закрытый ключ: [{d};{n}]", tabl('-', 66), '', sep='\n')


    #m = int(input('Введите сообщение для зашифровки, которое не превышает n --> ')) аналогично: долго вычисляется, решил поднять на пару строк выше

    #if m >= n:
        #sys.exit('Введённое Вами сообщение превышает n , пожалуйста, введите корректные данные!')


    #else:
        #c = (m ** E) % n
        #print(tabl('-', 66), f"Зашифрованное сообщение: {c}", sep='\n')

    print('', 'Хотите ли Вы расшифровать сообщение? 1 - да(необходим закрытый ключ), 2 - нет', sep='\n')

    shifr = int(input('--> '))
    print()

    if shifr == 1:
        print('    Дешифрование:', tabl('-', 66), sep='\n')

        c = int(input('Введите сообщения для дешифровки --> '))

        print(tabl('-', 66), '', tabl('-', 66), sep='\n')
        d = int(input('Введите элемент для закрытого ключа: d --> '))
        print(tabl('-', 66))
        n = int(input('Введите элемент для закрытого ключа(n > введённое сообщение): n --> '))

        print(tabl('-', 66), '', tabl('-', 66), f"Вы ввели закрытый ключ [{d};{n}]", sep='\n')

        m = (c ** d) % n
        print(tabl('-', 66), f"Расшифрованное сообщение: {m}", tabl('-', 66), sep='\n')


    elif shifr == 2:
        import webbrowser

        webbrowser.open(r'https://static.wikia.nocookie.net/5863557d-72f9-476c-8efb-68f3f001b62f/scale-to-width/755')


    else:
        sys.exit("Введите корректные данные!")








else:
    sys.exit("Введите корректные данные!")