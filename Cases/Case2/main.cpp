#include "Stack.h"
#include "Queue.h"

//Estructura y objeto para probar que se pueden utilizar ambos en la lista, pila y cola
struct Estruct{
	int value1;
	int value2;
	
	Estruct(){
		value1 = 1;
		value2 = 2;
	}
};

class Objeto{
  public:
	string value1;
	int value2;
	
	Objeto(){
		value1 = "Hello World";
		value2 = 2;
	}
};



int main() {
	
	//Lista
	LinkedList<int> * l = new LinkedList<int>();
	l->addFirst(111);
	l->addLast(222);
	l->addFirst(333);
	l->addLast(444);
	l->removeFirst();
	Node<int> * tmp = l->getFirst();
	while(tmp != NULL){
		cout << tmp->getData() << endl;
		tmp = tmp->getNext();
	}
	cout << endl;
	
	//Pila
	Stack<Estruct> * s = new Stack<Estruct>();
	Estruct e1;
	s->push(e1);
	Estruct e2;
	s->push(e2);
	Estruct e3;
	s->push(e3);
	Estruct e4;
	s->push(e4);
	Node<Estruct> * tmp2 = s->getFirst();
	while(tmp2 != NULL){
		cout << s->pop().value1 << endl;
		tmp2 = s->getFirst();
	}
	cout << endl;
	
	//Cola
	Queue<Objeto> * q = new Queue<Objeto>();
	Objeto o1;
	q->enqueue(o1);
	Objeto o2;
	q->enqueue(o2);
	Objeto o3;
	q->enqueue(o3);
	Node<Objeto> * tmp3 = q->getFirst();
	while(tmp3 != NULL){
		cout << q->dequeue().value2 << endl;
		tmp3 = q->getFirst();
	}	
	
	
	return 0;
}
