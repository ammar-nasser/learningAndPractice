/* 
* Created by:
    ___                                      _   __                         
   /   |  ____ ___  ____ ___  ____ ______   / | / /___ ______________  _____
  / /| | / __ `__ \/ __ `__ \/ __ `/ ___/  /  |/ / __ `/ ___/ ___/ _ \/ ___/
 / ___ |/ / / / / / / / / / / /_/ / /     / /|  / /_/ (__  |__  )  __/ /    
/_/  |_/_/ /_/ /_/_/ /_/ /_/\__,_/_/     /_/ |_/\__,_/____/____/\___/_/   
	on dd/mm/yy
*/

/*
* Created by:
___  ___      _                              _  __   __    _     _       
|  \/  |     | |                            | | \ \ / /   | |   (_)      
| .  . | ___ | |__   __ _ _ __ ___   ___  __| |  \ V /__ _| |__  _  __ _ 
| |\/| |/ _ \| '_ \ / _` | '_ ` _ \ / _ \/ _` |   \ // _` | '_ \| |/ _` |
| |  | | (_) | | | | (_| | | | | | |  __/ (_| |   | | (_| | | | | | (_| |
\_|  |_/\___/|_| |_|\__,_|_| |_| |_|\___|\__,_|   \_/\__,_|_| |_|_|\__,_|  
	on dd/mm/yy
 */                                                                        


#include <iostream>

class Time
{
public:
	int x;
public:
	void draw()
	{
		std::cout << "draw called" << std::endl;
	}
	Time& set(int _x)
	{
		x = _x;
		return *this;
	}
};

int main()
{
	Time* t = new Time;
	(t)->draw();
	int* am = new int(23);
	am[0] = 223;

	Time p = (t->set(23)).set(223);
	p.set(223);

	std::cout << p.x - t->x << std::endl;

	return 0;
}
