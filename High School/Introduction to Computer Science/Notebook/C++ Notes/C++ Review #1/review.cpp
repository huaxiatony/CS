#include <iostream.h> 
// cout + cin are enabled through the ^ thing that someone else coded for us. 

main()
{
	char v;
	// you can only put characters into v
	int w;
   // you can only put numbers into w;
	cout << w;
	// ^this will be a random value 
	v = '4';
	// v is a char, and stuffing the character Four into it, not the number 4. It's a symbol. 
	w = '4';
	// In contrast, the int w, has the number 4 in it. 
	cout << '4' << v << w << endl;
	// this will be 4 4 4
	cout << w + w << 'w' << endl;
	// this will be 8 w as it is the character w seen with the single quotation moarks
	cout << v << 'v' << w;
	// this will be 4 v 4, the v above has nothing to do with the one above all the rest, as it is the charafter v. 
	system("pause");
}
