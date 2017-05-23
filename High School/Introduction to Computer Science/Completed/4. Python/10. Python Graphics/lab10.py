#Python Lab 10
from graphics import *;

pt = Point(100,50)
window = GraphWin("Window", 500,500);
r = Rectangle(Point(20,10),pt);
r.setFill('red');
r.draw(window);
window.getMouse();
window.close();
