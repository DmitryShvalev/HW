#include <iostream>
using namespace std;
struct stek
{
	char x;
	stek* Next;
};
typedef stek* Nstek;
void Add(int data, Nstek& Head)
{
	Nstek Mystek;
	if (Head == NULL)
	{
		Head = new stek;
		Mystek = Head;
		Head->Next = NULL;
	}
	else
	{
		Mystek = new stek;
		Mystek->Next = Head;
		Head = Mystek;
	}
	Mystek->x = data;
}
void Show(Nstek Head)
{
	Nstek Mystek;
	while (Head != NULL)
	{
		Mystek = Head;
		cout << Head->x << " ";
		Head = Head->Next;
	}
}
Nstek Find(Nstek Head, int data)
{
	Nstek q = Head;
	while (q && q->x != data)
		q = q->Next;
	return q;
}
void Deletestek(Nstek& Head, Nstek Oldstek)
{
	Nstek q = Head;
	if (Head == Oldstek)
		Head = Oldstek->Next;
	else
	{
		while (q && q->Next != Oldstek)
			q = q->Next;
		if (q == NULL) return;
		q->Next = Oldstek->Next;
	}
	delete Oldstek;
}
void AddAfter(Nstek p, Nstek Newstek)
{
	Newstek->Next = p->Next;
	p->Next = Newstek;
}
void AddBefore(Nstek& Head, Nstek p, Nstek Newstek)
{
	Nstek q = Head;
	if (Head == p)
	{
		Newstek->Next = Head;
		Head = Newstek;
		return;
	}
	while (q && q->Next != p)
		q = q->Next;
	if (q)
		AddAfter(q, Newstek);
}
void main()
{
	setlocale(LC_ALL, "rus");
	Nstek Head;
	int l, k, m;
	char x, p, o;
	Head = NULL;
	cout << "введите количество элементов стэка\n";
	cin >> l;
	cout << "заполните стэк\n";
	for (int i = 0; i < l; i++)
	{
		cin >> x;
		Add(x, Head);
	}
	Show(Head);
	cout << "\nс каким ключом удалить\n";
	cin >> p;
	while (Find(Head, p) == NULL)
	{
		cout << "нет элемента с заданым ключом\n";
		cout << "с каким ключом удалить\n";
		cin >> p;
	}
	Deletestek(Head, Find(Head, p));
	Show(Head);
	cout << "\nперед каким номером добавить элемент\n";
	cin >> m;
	Nstek q = Head;
	for (int i = 0; i < m - 1; i++)
	{
		q = q->Next;
	}
	cout << "сколько добавить\n";
	cin >> k;
	cout << "заполните список\n";
	for (int i = 0; i < k; i++)
	{
		Nstek Newstek = new stek;
		cin >> o;
		Newstek->x = o;
		AddBefore(Head, q, Newstek);
		q = Newstek;
	}
	Show(Head);
}