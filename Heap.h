class Heap{
	struct Item{
		Item( void* data);
		~Item();
		Item* nxt;
		void* dta;
	}
	Item root;
	public:
	Heap();
	~Heap();
	void add(void* data);
	void* getRoot();
	
}
