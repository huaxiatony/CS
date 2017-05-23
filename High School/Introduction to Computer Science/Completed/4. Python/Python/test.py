#Python
num = input("Please enter line lenght: ")
vh = input("Do you want a horizontal or vertical line?: ")
if(vh == "vertical"):
    for x in range(0,1):
            print(num)
elif(vh == "horizontal"):
    for x in range(0,1):
            print(num, end = " ")
