#include "Heap.h"

Heap::Heap(){

}
Heap::Item::Item( T data){
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

