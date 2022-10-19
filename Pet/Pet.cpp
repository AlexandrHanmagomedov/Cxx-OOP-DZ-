#include "Pet1.h"
#include "Cat.h"
#include "Sparrow.h"
#include"Binary.h"
#include"ASCII.h"
int main() {
	cout << "Pet:\n";
	Pet d("Dog", 15, 10, "World", "Black");
	d.Show();
	d.Say();
	cout << "\nCat:\n";
	Cat c("RedCat", 4.22, 5.33, "home", "red", 3);
	c.Show();
	c.Say();
	cout << "\nSparrow:\n";
	Sparrow s("Sparrow", 0.50, 22, "Floor", "LGBT", 55);
	s.Show();
	s.Say();
	cout << endl;
	////////////////////////////////////////////////////////////
	string path("Text.txt");
	cout << "Text in file:\n";
	FileReader f;
	f.Display(path);
	cout << "\n\nText in file(ASCII):\n";
	ASCII a;
	a.Display(path);
	cout << "\n\nText in file(binary code):\n";
	Binary b;
	b.Display(path);

	



}