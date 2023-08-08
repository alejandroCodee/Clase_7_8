
#include <iostream>
#include "DoubleList.h"

using namespace std;

int main()
{
	DoubleList <int> list;
	list.Pushfront(4);
	list.Pushfront(5);
	list.Pushfront(3);
	list.Pushfront(2);
	list.Pushfront(1);

	list.print();

	list.deletebyNode(list.head);

	list.print();

	list.deletebyNode(list.tail);

	list.print();

	list.deletebyNode(list.head->next);

	list.print();
   
}

