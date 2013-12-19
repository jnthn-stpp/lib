Matrix::Matrix(int row, int col){
	int temp [row][col];
	storage = temp;
	this.row = row;
	this.col = col;
}
Matrix::~Matrix(){
	delete [][]storage;
}
void Matrix::set(int row, int col, int data){
	storage[row][col] = data;
}
int Matrix::get(int row, int col){
	return storage[row][col];
}
