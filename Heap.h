class Heap{
	struct Item{
		Item( void* data);
		~Item();
		Item* nxt;
		void* dta;
	}
	Item root;
}
