#include"source.cpp"

int main() {
	int answer = 0;
	cout << "Welcome to FCI Matrix Calculator" << endl << "-----------------\n";
	while (answer != 5) {
		cout << " 1- Perform Matrix Addition\n 2- Perform Matrix Subtraction \n 3- Perform Matrix Multiplication\n 4- Matrix Transpose\n 5- Quit\n";
		cin >> answer;
		switch (answer) {
		case 1: {
			Matrix<int> a;
			cout << "first matrix\n";
			a.create();
			Matrix<int> b;
			cout << "second matrix\n";
			b.create();
			if (a.getrow() != b.getrow()||a.getcolumn()!=b.getcolumn()) {
				cout << "different dimensions, addition can't be performed" << endl;
			}
			else {
				a.input();
				b.input();
				a + b;
			}
			answer = 0;
			break;
		}
		case 2: {
			Matrix<double> a;
			cout << "first matrix\n";
			a.create();
			Matrix<double> b;
			cout << "second matrix\n";
			b.create();
			if (a.getrow() != b.getrow() || a.getcolumn() != b.getcolumn())
			{
				cout << "different dimensions, subtraction can't be performed" << endl;
			}
			else {
				a.input();
				b.input();
				a - b;
			}
			answer = 0;
			break;
		}
		case 3: {
			Matrix <int>a;
			cout << "Please enter the first matrix" << endl;
			a.create();
			Matrix<int> b;
			cout << "Please enter the second matrix" << endl;
			b.create();
			if (a.getcolumn() != b.getrow())
			{
				cout << "invalid, multiplication can't be performed" << endl;
			}
			else {
				a.input();
				b.input();
				a* b;
			}
			answer = 0;
			break;
		}
		case 4: {
			Matrix <int>a;
			cout << "Please enter the matrix" << endl;
			a.create();
			a.transmat(a);
			answer = 0;
			break;
		}
		}
	}
}