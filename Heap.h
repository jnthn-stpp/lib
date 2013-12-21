template <class T>
class Heap{
	struct Item{
		Item( T data );
		~Item();
		Item* nxt;
		Item* lst;
		T dta;
	}
	Boolean bubble( Item* itm );
	Item* root;
	public:
	Heap();
	~Heap();
	void append(T data);
	T pop();
	
}
