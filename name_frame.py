# I'm gonna try to write the name frame program from scratch in python

name = input("What's your name? ")

greeting = "Hello, " + name + "!"
second = '* ' + ' ' * len(greeting) + ' *'
first = '*' * len(second)

print(first)
print(second)
print('* ' + greeting + ' *')
print(second)
print(first)

