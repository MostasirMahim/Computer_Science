# #This is my first Phyton Program
# print('hello world');
# print("Hi!")

# ##Variable = A container for a value (strings,integar,float,boolean)

# #Stings
# first_name = "Mahim";
# nickname = 'Rahad';
# print(first_name);
# print(f'My name is {nickname}')

# #Integers & Float
# age = 21
# cgpa = 3.78
# print(age)
# print(f"My Result : {cgpa}")

# #Boolean
# is_male = True

# if is_male : 
#     print("He is a Boy")
# else: 
#     print("She is a girl.")


# ## Typecasting = the process of converting a variable from one data type to another str(), int(), float(), bool()

# name = "Mahim"
# age = 21
# cgpa = 3.78
# is_male = True

# #toInteger
# cgpa = int(cgpa)
# print(cgpa)
# is_male = int(is_male)
# print(is_male) #True = 1, false = 0
# #toFloat
# age= float(age)
# print(age)

# #toString
# age = str(age)
# print(age) ; print(type(age))
# age += "1" ; print(age)

# is_Female = False
# is_Female = str(is_Female)
# print(is_Female) #False

# #toBoolean
# age = bool(age)   #True
# name = bool(name) #True
# print(age); print(name)

###input() = A function that prompt the user to enter data returns data as a string.

# name = input("Whats Your Name?")
# print(f"Hello {name}")

# age = int(input("Whats Your Age?"))
# print(f"You are {age} years old")

## Exercise- 1 Rectangle area Calc
# legnth = int(input("Enter the length : "))
# width = float(input("Enter the width : "))
# area = legnth * width
# print(f"The area is {area} cm") #25.0

# #Exercise-2 Shopping Cart Program
# product = input("What Do You Want Buy : ")
# price = float(input("How Much Price: "))
# quantity = int(input("Quantity : "))
# total = quantity * price
# print("-------------")
# print(f"Total : {quantity}x {product} = ${total}")
# print("-------------")

# ##Arthemetic Operator

# friends = 5
# friends += 5 #10
# friends -= 2 #3
# friends *= 2 #10
# friends **= 2 #25
# friends /= 2 #2.5
# friends %= 2 # 1

# x= 3.14
# y= -4
# z=5

# result = round(x,1) #3.1
# result = round(x) #3
# result= abs(y) #4
# result= pow(z,2) #25
# result = max(x,y,z) #5
# result = min(x,y,z) #-4

# import math
# a= 9
# b= 10.5

# result = math.pi #3.141592653589793
# result = math.e #2.718281828459045
# result = math.sqrt(a) #3.0
# result = math.ceil(b) #11
# result = math.floor(b) #10


# ##Conditional statement if = Do some code only If some condition is true Else do something else

# age = int(input("Whats Your age : "))

# if age >= 100 :
#     print("You are too old to sign up")
# elif age >=18:
#     print("You qualified to sign up")
# else: 
#     print("You must be 18+ to sign up")


# ## logical operator = evaluate multiple conditions (or, and, not)

# age = 21
# married = False

# if age > 20 and not married :
#     print("It's me")
# elif age <20 and married :
#     print("I love coding") #it's me

# married = True
# if age == 21 or not married and age > 20 and  married:
#     print("it's true") #it's true
# else : print("Not true")


# ## Ternary operator = A one-line shortcut fro the if-else statement Print or assign one of two values based on a condition : X if condition else Y

# result = "positive" if 3>2 else "negative"
# print(result) #positive
 
# ##Strings-methods

# name = "Mahim rahad"
# last_name= "mahimrahad"
# usernane= "mahimRahad"

# result = len(name) #11
# result = name.find('a') #1
# result = name.rfind('a') #9
# result = last_name.capitalize() #Mahimrahad
# result = last_name.upper() #MAHIMRAHAD
# result = name.lower() #mahim rahad
# result = name.isdigit() #False
# result = name.isalpha() #False
# result = usernane.isalpha() #True
# result = usernane.count("a") #3
# result = usernane.replace("a","A") #mAhimRAhAd
# result = help('str')

# ## indexing = accessing elements of a sequence using [] (indexing operator) [start: end: step]
# name = "0123456789"
# result = name[-1] #9
# result = name[0] #0
# result = name[0:5] #01234
# result = name[-4:] #6789

# ##Format specifier
# price1= 345.000 
# print(f"{price1:.2f}") #345.00

# ##While loop = excute some code WHILE some condition remains true
# age = int(input("Enter your age : "))
# while age <0 :
#     print("age can't be negative")
#     age = int(input("Enter your age : "))
# print(f"your age is {age}")


# ## for loops = execute a block of code a fixed number of times. You can iterate over a range, string, sequence, etc.

# number = "123456789"

# for x in number:
#     print(x)

# for x in range(1,20) :
#     print(x)

# for x in reversed(range(1,20,2)) :  #or use step -1
#     print(x)

# for x in range(1,20) :
#     if x ==13:
#      continue
#     else:
#         print(x)
# for x in range(1,20) :
#     if x ==13:
#      break
#     else:
#         print(x)

# ## Time Module
# import time
 
# time.sleep(3)
# print("hi")

# ## Countdown timer

# my_time = int(input("Enter From Time : "))

# for x in range(my_time,0, -1):
#     seconds = x % 60
#     minutes = int (x / 60) % 60
#     hours = int (x / 3600) 

#     print(f"{hours:02}:{minutes:02}:{seconds:02}")
#     time.sleep(1)

# ## nested loop = A loop within another loop (outer, inner)
# # outer loop:
# #   inner loop:

# for x in range(3):
#     for y in range(1,10):
#         print(y, end="")
#     print()


## 2:33

## Collection = A group of items stored in a single variable

## List [] = A collection of items in a particular order and changeable, Duplicates are allowed
## Tuple () = A collection of items in a particular order and unchangeable, Duplicates are allowed
## Set {} = A collection of unique items and unchangeable (Duplicates are not allowed) and unordered
## Dictionary= A collection of key-value pairs


# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# print(fruits[::-1])

# for fruit in reversed(fruits):
#     print(fruit)

# print(help(fruits))
# print(len(fruits))  # 5
# print("apple" in fruits)  # True
# print("apple" not in fruits)  # False

# fruits.sort()
# print(fruits)  # ['apple', 'banana', 'cherry', 'kiwi', 'mango']
# fruits.sort(reverse=True)
# print(fruits)  # ['mango', 'kiwi', 'cherry', 'banana', 'apple']
# fruits.reverse()
# print(fruits)  # ['apple', 'banana', 'cherry', 'kiwi', 'mango']
# fruits.append("orange")
# print(fruits)  # ['apple', 'banana', 'cherry', 'kiwi', 'mango', 'orange']
# fruits.insert(2, "lemon")
# print(fruits)  # ['apple', 'banana', 'lemon', 'cherry', 'kiwi', 'mango', 'orange']
# fruits.remove("kiwi")
# print(fruits)  # ['apple', 'banana', 'lemon', 'cherry', 'mango', 'orange']
# fruits.pop()
# print(fruits)  # ['apple', 'banana', 'lemon', 'cherry', 'mango']
# fruits.clear()
# print(fruits)  # []


## set

# fruits = {"apple", "banana", "cherry", "kiwi", "mango", "apple"}
# print(fruits)  # {'apple', 'banana', 'cherry', 'kiwi', 'mango'}

# print("apple" in fruits)  # True
# print("apple" not in fruits)  # False

# print(len(fruits))  # 5

# fruits.add("orange")
# print(fruits)  # {'apple', 'banana', 'cherry', 'kiwi', 'mango', 'orange'}

# fruits.remove("kiwi")
# print(fruits)  # {'apple', 'banana', 'cherry', 'mango', 'orange'}

# fruits.discard("kiwi")
# print(fruits)  # {'apple', 'banana', 'cherry', 'mango', 'orange'}
# fruits.clear()
# print(fruits)  # set()

# fruits.add("apple")
# print(fruits)  # {'apple', 'banana', 'cherry', 'mango', 'orange'}
# fruits.update(["apple", "banana", "cherry", "kiwi", "mango"])
# print(fruits)  # {'apple', 'banana', 'cherry', 'kiwi', 'mango', 'orange'}        # add multiple items

# Tuple 

# fruits = ("apple", "banana", "cherry", "kiwi", "mango")
# print(fruits)  # ('apple', 'banana', 'cherry', 'kiwi', 'mango')

# print("apple" in fruits)  # True
# print("apple" not in fruits)  # False

# print(len(fruits))  # 5

# fruits = list(fruits)
# print(fruits)  # ['apple', 'banana', 'cherry', 'kiwi', 'mango']

# fruits = set(fruits)
# print(fruits)  # ('apple', 'banana', 'cherry', 'kiwi', 'mango')
# print(fruits.count("apple"))


## 2D Collection

# drinks = ["coffee", "tea", "juice"]
# foods = ["sandwich", "pizza", "hamburger"]
# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# vegetables = ["tomato", "potato", "carrot", "cabbage", "onion"]

# collection = [
#     ["coffee", "tea", "juice"], 
#     ["sandwich", "pizza", "hamburger"], 
#     ["apple", "banana", "cherry", "kiwi", "mango"], 
#     ["tomato", "potato", "carrot", "cabbage", "onion"]
# ]
# collection = [
#     {"coffee", "tea", "juice"}, 
#     {"sandwich", "pizza", "hamburger"}, 
#     {"apple", "banana", "cherry", "kiwi", "mango"}, 
#     {"tomato", "potato", "carrot", "cabbage", "onion"}
# ]
# collection = (
#     ("coffee", "tea", "juice"), 
#     ("sandwich", "pizza", "hamburger"), 
#     ("apple", "banana", "cherry", "kiwi", "mango"), 
#     ("tomato", "potato", "carrot", "cabbage", "onion")
# )

# for x in collection:
#     print("-----")
#     for y in x:
#         print(y)
#     print("-----")


