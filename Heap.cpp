#include "Heap.h"

Heap::Heap(){

}
Heap::Item( T data){
	dta = data;

}
Heap::pop(){
	Item temp = root;
	root = root->nxt;
	return root->dta;
}

