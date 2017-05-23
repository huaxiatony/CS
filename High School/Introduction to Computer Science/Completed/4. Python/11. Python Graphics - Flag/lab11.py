#Python Lab 11
from graphics import *;

window = GraphWin("Window", 500,500);

pt1 = Point(50,50)
pole = Rectangle(Point(25,500),pt1);
pole.setFill('gray');
pole.draw(window);

pt3 = Point(50,300)
flaga = Rectangle(Point(500,50),pt3);
flaga.setFill('red');
flaga.draw(window);

pt2 = Point(50,200)
flagb = Rectangle(Point(250,50),pt2);
flagb.setFill('blue');
flagb.draw(window);

window.getMouse();
window.close();
