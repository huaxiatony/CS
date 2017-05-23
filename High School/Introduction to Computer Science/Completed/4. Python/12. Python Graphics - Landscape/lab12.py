#Python Lab 12
from graphics import *;

window = GraphWin("Window", 500,500)

pt1 = Point(2,2)
sky = Rectangle(Point(500,250),pt1);
sky.setFill('black');
sky.draw(window);

moon = Circle(Point(400,50),25);
moon.setFill('gray');
moon.draw(window);

pt2 = Point(2,750)
land = Rectangle(Point(500,250),pt2);
land.setFill('green');
land.draw(window);

pt3 = Point(500,220)
fen = Rectangle(Point(2,230),pt3);
fen.setFill('brown');
fen.draw(window);

pt4 = Point(500,260)
fen2 = Rectangle(Point(2,250),pt4);
fen2.setFill('brown');
fen2.draw(window);



window.getMouse();
window.close();
