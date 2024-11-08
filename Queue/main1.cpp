#include "queue.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;


int main()
{
	Queue* q = new Queue;
	initQueue(q, 3); //initiate queue of size 3
	enqueue(q, 1);
	enqueue(q, 4);
	enqueue(q, 9);

	while (!isEmpty(q))
	{
		cout << dequeue(q) << endl;
	}

	cleanQueue(q);
	delete q;

	system("pause");
	return 0;
}