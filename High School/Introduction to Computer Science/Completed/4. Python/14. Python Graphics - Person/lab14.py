#Python Lab 14
from graphics import *;

window = GraphWin("Window", 500,500)

pt1 = Point(50,50)
face = Oval(Point(100,100),pt1);
face.setFill('yellow');
face.draw(window);

eye = Rectangle(Point(60,70),Point(70,75));
eye.setFill('black');
eye.draw(window);

eye2 = Rectangle(Point(80,70),Point(90,75));
eye2.setFill('black');
eye2.draw(window);

mouth = Rectangle(Point(60,85),Point(90,87));
mouth.setFill('black');
mouth.draw(window);

pt2 = Point(50,100)
body = Rectangle(Point(100,200),pt2);
body.setFill('red');
body.draw(window);

arm1 = Rectangle(Point(30,110),Point(50,190));
arm1.setFill('red');
arm1.draw(window);

arm2 = Rectangle(Point(100,110),Point(120,190));
arm2.setFill('red');
arm2.draw(window);

belt = Rectangle(Point(50,160),Point(100,170));
belt.setFill('black');
belt.draw(window);

buckle = Rectangle(Point(60,160),Point(90,170));
buckle.setFill('yellow');
buckle.draw(window);

pt3 = Point(60,200)
legs = Rectangle(Point(90,300),pt3);
legs.setFill('blue');
legs.draw(window);

pt4 = Point(100,320)
feet = Rectangle(Point(50,300,),pt4);
feet.setFill('brown');
feet.draw(window);

window.getMouse();
window.close();
