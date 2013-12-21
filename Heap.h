template <class T>
class Heap{
	struct Item{
		Item( T data );
		~Item();
		Item* nxt;
		T dta;
	}
	Item* root;
	public:
	Heap();
	~Heap();
	void append(T data);
	T pop();
	
}
