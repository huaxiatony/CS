#Python Notes 3

from graphics import *;

window = GraphWin("Window", 600,500);
#Parameterizing
for x in range(0,100):
    fp = Rectangle(Point(10*x,15),Point(10*x+2,75));
    fp.draw(window);

circle = Circle(Point(200,200),75);
circle.draw(window);

#fp = fencepost
#fp = Rectangle(Point(10,15),Point(15,45));
#fp.draw(window);

#fp1 = Rectangle(Point(20,15),Point(25,45));
#fp1.draw(window);

#fp2 = Rectangle(Point(30,15),Point(35,45));
#fp2.draw(window);

window.getMouse();
window.close();


