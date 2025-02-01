# Comparison operators < > <= >= == !=
print(5 > 3)    # True  => is 5 greater than 3
print(4 == 5)   # Is 4 equivalent to 5
print(2 <= 3)   # is 2 less than or equal to 3

# print(465)
# print("Blessed")


# assignment operators
# = assignment operator
# += add and assign
# -= subtract and assign
# *=, /=

x = 4
y = 3

# x = x + y 
# x += y 
# x = x - y   # x -= y
# x -= y

# x *= y

x += 4

print(x)

# expression = -0.5 - 2   = -2.5  #
# expression = 4 / 3 * 5

# brackets have the highest order, **, * / //, - +
# BODMAS

# print(expression)

my_expression = 3 - 2 + 3 ** 4 / 2
print(my_expression)


# STRINGS
string1 = 'Jack'
string2 = "Timothy"
string3 = """Obisalem"""
print(string1)
print(string2)
print(string3)

# syntax for indexing
# variable_name[index]

# indexing in strings
message  = "How are you my friend"
# H = 0
# o = 1
# w = 2
# "" = 3
# a = 4
# e = 18    -3
# n = 19    -2
# d = 20    -1

print(message[0])
print(message[2])

# negative indexing 
print(message[-1])
print(message[-3])

# slicing => getting a substring from a given string
# variable_name[startindex:stopindex]     # stopindex -1
# variable_name[startindex:stopindex:step]
message  = "How are you my friend"
print(message[0:8])     #How are 
print(message[5:11])
print(message[4:11])

print(message[-1:-3:-1])
print(message[-1:-4:-1])


# introducing step 
message = "How are you my enemy"
print(message[2:9])
print(message[2:9:2])
print(message[2:9:3])

print(message[:6])
print(message[8:])
print(message[::])  #because there is neither the start index nor the stop index
print(message[::-1])
print(message[::-2])

# my_fruits = ["pineapple", "Orange", "Pear"]
# print(my_fruits[1])


# String concatennation
first_string = "Kazooba"
second_string = "Faith"
full_string = first_string + " " + second_string

print(first_string + second_string)
print(first_string + " " + second_string)
print(full_string)

print((first_string + " ") * 4)


# STRING METHODS
my_name = "alio jack BEZos"
print(my_name)

# lower()
# print(my_name.lower())

# # upper()
# print(my_name.upper())

# # title()
# print(my_name.title())

# capitalize()
# print(my_name.capitalize())

# strip()   lstrip() rstrip()
my_string = "    Eria Jackson     "
print(my_string)
print(my_string.strip())
print(my_string.lstrip())
print(my_string.rstrip())

#split()
statement = "Hello, there, I missed your, call"
# print(statement.split("e"))
# print(statement.split(","))
print(statement.split())
# print(statement.)
# greeting = "hello"
# print(greeting.split())

password = "blablabla/;;"
print(password.isalpha())

my_list = ["apple", "orange", "Pear"]
sentence = "+".join(my_list)
print(sentence)


string = "Python language"
string2 = string.replace("o", "O")
print(string2)
print(string.lower())