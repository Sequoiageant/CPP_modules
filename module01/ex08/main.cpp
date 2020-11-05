#include "Human.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Human jim;

	jim.action("meleeAttack", "joe");
	jim.action("rangedAttack", "jack");
	jim.action("intimidatingShout", "avrell");
	jim.action("noaction", "avrell");
	return 0;
}
