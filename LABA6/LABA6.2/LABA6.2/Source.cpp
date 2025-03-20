#include <iostream> 
#include <vector> 
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	vector <double> a;
	vector <double> b;
	int N;
	cin >> N;
	for (int i = 0; i < N;i++) {
		double l = 0;
		cout << "Введите эл." << i << " =";
		cin >> l;
		a.push_back(l);
	}
	for (int k = 0;k < N;k++) {
		if (fabs(a[k]) < 1)
			b.push_back(a[k]);
	}
	for (int j = 0; j < N;j++) {
	if(fabs(a[j])>=1)
		b.push_back(a[j]);
	}
	cout << "Вектор b : ";
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << endl;

	return 0;
}