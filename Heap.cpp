#include "Heap.h"

Heap::Heap(){

}
<<<<<<< HEAD
Heap::Item::Item( T data){
=======
Heap::Item(T data){
>>>>>>> fe84471922e84c904cdbc7d6a2c1473e85364cce
	dta = data;

}
T Heap::pop(){
	Item temp = root;
	root = root->nxt;
	return root->dta;
}

Boolean Heap::bubble(Item* itm){
	Item* other = itm->nxt;
	if(itm-> dta > other->dta){
		itm->nxt = other->nxt;
		other->nxt->lst = itm;
		other->lst = itm->lst;
		other->nxt = itm;
		return true;	
	}else{
		return false;
	}

}

