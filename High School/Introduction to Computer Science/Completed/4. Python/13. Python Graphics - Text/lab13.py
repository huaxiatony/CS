#Python Lab 13
from graphics import *;

window = GraphWin("Window",500,500);

a = Text(Point(50,50),'Hello!');
a.setSize(30);
a.setTextColor('red');
a.draw(window);

window.getMouse();
window.close();
