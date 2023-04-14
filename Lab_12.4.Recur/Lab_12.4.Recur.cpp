#include <iostream>
#include <iomanip>
using namespace std;

typedef int Info;
struct Elem
{
	Elem* link;
	Info info;
};

void Insert(Elem*& L, Elem* T, Info value)
{
	Elem* tmp = new Elem;
	tmp->info = value;
	if (L != NULL)
	{
		if (T->link != L)
			Insert(L, T->link, value);
		else
			T->link = tmp;
	}
	else
		L = tmp;
	tmp->link = L;
}

int Count(Elem* L, Elem* first, int k)
{
	if (L->link == first)
	{
		if (L->info < 0)
			return k + 1;
		else
			return k;
	}
	else
	{
		if (L->info < 0)
			return Count(L->link, first, k + 1);
		else
			return Count(L->link, first, k);
	}
}


void Print(Elem* L)
{
	if (L == NULL)
		return;
	static Elem* first = L;
	cout << setw(4) << L->info;
	if (L->link != first)
		Print(L->link);
	else
		cout << endl;
}

int main()
{
	Elem* L = NULL;
	Insert(L, L, -1);
	Insert(L, L, 2);
	Insert(L, L, 1);
	Insert(L, L, -4);
	Insert(L, L, 3);
	Insert(L, L, -7);
	
	cout << "given list: " << endl;
	Print(L);
	cout << endl;
	cout << "Count of number with negative values: ";
	cout << Count(L, L, 0) << endl;
	
	return 0;
}