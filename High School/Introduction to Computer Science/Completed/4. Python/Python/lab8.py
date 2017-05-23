#Python
word = input("Please enter the word: ")
vh = input("Horizontal or vertical line?: ")
if(vh == "vertical"):
    for x in range(0,len(word)):
        print(word)
elif(vh == "horizontal"):
    for x in range(0,len(word)):
        print(len(word), end=" ")
        
