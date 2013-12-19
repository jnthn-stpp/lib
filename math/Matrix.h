class Matrix{
	int row, col;
	int [][] storage;

	public:
	Matrix(int row, int col);	
	~Matrix();
	void set(int row, int col, int data);
	int get(int row, int col);
}
