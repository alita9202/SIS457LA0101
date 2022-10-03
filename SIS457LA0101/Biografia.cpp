#include <iostream>
#include <string>
using namespace std;
int main() {
	string x;
	cout << "Mi nombre es Alejandra Terceros tengo 23 años soy nacida en Sucre pero vivi en La Paz toda mi primaria y secundaria." << endl;
	cout << "actualmente vivo con mi hermano y estudio en un instituto por las noches llamado ITSEC SUCRE" << endl;
	cout << "Gracias por leer mi Biografia :D" << endl;
	cout << "Quiere ver otra vez? escriba SI/NO "<<endl;
	cin >> x;
	while (x == "SI")
	{
		cout << "Mi nombre es Alejandra Terceros tengo 23 años soy nacida en Sucre pero vivi en La Paz toda mi primaria y secundaria." << endl;
		cout << "actualmente vivo con mi hermano y estudio en un instituto por las noches llamado ITSEC SUCRE" << endl;
		cout << "Gracias por leer mi Biografia :D" << endl;
		cin >> x;
	}
	system("pause");
	return 0;
}