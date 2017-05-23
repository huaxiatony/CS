Python 3.3.2 (v3.3.2:d047928ae3f6, May 16 2013, 00:03:43) [MSC v.1600 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> print("Happy New Year")
Happy New Year
>>> print(3+2)
5
>>> print("Hello!")("My Name is Benjamin Lee")
Hello!
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    print("Hello!")("My Name is Benjamin Lee")
TypeError: 'NoneType' object is not callable
>>> print("Hello!")print("My Name is Benjamin Lee")
SyntaxError: invalid syntax
>>> print 1
SyntaxError: invalid syntax
>>> print("Helllo!","Hello!")
Helllo! Hello!
>>> print(1-1)
0
>>> print("1+1")
1+1
>>> print(end='\n')

>>> print("Hello!" end='\n "Hello!")
      
SyntaxError: invalid syntax
>>> print("Hello!" '\n' "Hello!")
Hello!
Hello!
>>> 
