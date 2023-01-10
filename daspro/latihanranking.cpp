//judul latihan rankng
//2 okt 2022
//pryta yonifa putri

#include <iostream>
using namespace std;

//kamus
int A, B, C, D, E;

//deskripsi
int main ()
{
	cout << "Masukkan bilangan" <<  endl;
	cout << "-------------------------------" << endl;
	cout << "Masukkan A :";
	cin >> A;
	cout << "Masukkan B :";
	cin >> B;
	cout << "Masukkan C :";
	cin >> C;
	cout << "Masukkan D :";
	cin >> D;
	cout << "Masukkan E :";
	cin >> E;
	
	if (A>B && B>C && C>D && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, C, D, E";
	}
	else
	
	if (A>B && B>C && C>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, C, E, D";
	}
	else
	
	if (A>B && B>C && D>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, D, C, E";
	}
	else
	
	if (A>B && B>D && D>E && E>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, D, E, C";
	}
	else
	
	if (A>B && B>E && E>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, E, C, D";
	}
	else																		
	
	if (A>B && B>E && E>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, B, E, D, C";
	}
	else
	
	if (A>C && C>B && B>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, B, D, E";
	}
	else
	
	if (A>C && C>B && B>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, B, D, E";
	}
	else
	
	if (A>C && C>B && B>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, B, E, D";
	}
	else
	
	if (A>C && C>D && D>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, D, B, E";
	}
	else
	
	if (A>C && C>D && D>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, D, E, B";
	}
	else
	
	if (A>C && C>E && E>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, E, B, D";
	}
	else
	
	if (A>C && C>E && E>D && D>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, C, E, D, B";
	}
	else
	
	if (A>D && D>B && B>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, B, C, E";
	}
	else
	
	if (A>D && D>B && B>E && E>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, B, E, C";
	}
	else
	
	if (A>D && D>C && C>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, C, B, E";
	}
	else
	
	if (A>D && D>C && C>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, C, E, B";
	}
	else
	
	if (A>D && D>E && E>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, E, B, C";
	}
	else
	
	if (A>D && D>E && E>C && C>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, D, E, C, B";
	}
	else
	
	if (A>E && E>B && B>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, E, B, C, D";
	}
	else
	
	if (A>E && E>B && B>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, E, B, D, C";
	}
	else
	
	if (A>E && E>C && C>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, E, C, B, D";
	}
	else
	
	if (A>E && E>D && D>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, E, D, B, C";
	}
	else
	
	if (A>E && E>D && D>C && C>B)
	{ 
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "A, E, D, C, B";
	}
	else 
	
	if (B>A && A>C && C>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, C, D, E";
	}
	else
	
	if (B>A && A>C && C>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, C, E, D";
	}
	else
	
	if (B>A && A>D && D>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, D, C, E";
	}
	else
	
	if (B>A && A>D && D>E && E>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, D, E, C";
	}
	else
	
	if (B>A && A>E && E>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, E, C, D";
	}
	else
	
	if (B>A && A>E && E>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. A, E, D, C";
	}
	else
	
	if (B>C && C>A && A>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, A, D, E";
	}
	else
	
	if (B>C && C>A && A>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, A, E, D";
	}
	else
	
	if (B>C && C>D && D>A && A>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, D, A, E";
	}
	else
	
	if (B>C && C>D && D>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, D, E, A";
	}
	else
	
	if (B>C && C>E && E>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, E, A, D";
	}
	else
	
	if (B>C && C>E && E>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. C, E, D, A";
	}
	else
	
	if (B>D && D>A && A>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, A, C, E";
	}
	else
	
	if (B>D && D>A && A>E && E>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, A, E, C";
	}
	else
	
	if (B>D && D>C && C>A && A>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, C, A, E";
	}
	else
	
	if (B>D && D>C && C>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, C, E, A";
	}
	else
	
	if (B>D && D>E && E>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, E, A, C";
	}
	else
	
	if (B>D && D>E && E>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. D, E, C, A";
	}
	else
	
	
	if (B>E && E>A && A>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, A, C, D";
	}
	else
	
	if (B>E && E>A && A>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, A, D, C";
	}
	else
	
	if (B>E && E>C && C>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, C, A, D";
	}
	else
	
	if (B>E && E>C && C>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, C, D, A";
	}
	else
	
	if (B>E && E>D && D>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, D, A, C";
	}
	else
	
	if (B>E && E>D && D>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "B. E, D, C, A";
	}
	else
	
	if (C>A && A>B && B>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, B, D, E";
	}
	else
	
	if (C>A && A>B && B>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, B, D, E";
	}
	else
	
	if (C>A && A>D && D>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, D, B, E";
	}
	else
	
	if (C>A && A>D && D>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, D, E, B";
	}
	else
	
	if (C>A && A>E && E>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, E, B, D";
	}
	else
	
	if (C>A && A>E && E>D && D>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. A, E, D, B";
	}
	else
	
	if (C>B && B>A && A>D && D>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, A, D, E";
	}
	else
	
	
	if (C>B && B>A && A>E && E>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, A, E, D";
	}
	else
	
	if (C>B && B>D && D>A && A>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, D, A, E";
	}
	else
	
	if (C>B && B>D && D>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, D, E, A";
	}
	else
	
	if (C>B && B>E && E>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, E, A, D";
	}
	else
	
	if (C>B && B>E && E>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. B, E, D, A";
	}
	else
	
	if (C>D && D>A && A>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. D, A, B, E";
	}
	else
	
	if (C>D && D>A && A>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. D, A, E, B";
	}
	else
	
	if (C>D && D>B && B>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. D, B, E, A";
	}
	else
	
	if (C>D && D>E && E>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. D, E, A, B";
	}
	else
	
	if (C>D && D>E && E>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. D, E, B, A";
	}
	else
	
	if (C>E && E>A && A>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, A, B, D";
	}
	else
	
	if (C>E && E>A && A>D && D>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, A, D, B";
	}
	else
	
	if (C>E && E>B && B>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, B, A, D";
	}
	else
	
	if (C>E && E>B && B>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, B, D, A";
	}
	else
	
	if (C>E && E>D && D>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, D, A, B";
	}
	else
	
	if (C>E && E>D && D>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "C. E, D, B, A";
	}
	else
	
	if (D>A && A>B && B>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, B, C, E";
	}
	else
	
	if (D>A && A>B && B>E && E>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, B, E, C";
	}
	else
	
	if (D>A && A>C && C>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, C, B, E";
	}
	else
	
		if (D>A && A>C && C>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, C, E, B";
	}
	else
	
	if (D>A && A>E && E>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, E, B, C";
	}
	else
	
	if (D>A && A>E && E>C && C>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, A, E, C, B";
	}
	else
	
	if (D>B && B>A && A>C && C>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, B, A, C, E";
	}
	else
	
	if (D>B && B>C && C>A && A>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, B, C, A, E";
	}
	else
	
	if (D>B && B>C && C>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, B, C, E, A";
	}
	else
	
	if (D>B && B>E && E>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, B, E, A, C";
	}
	else
	
	if (D>B && B>E && E>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, B, E, C, A";
	}
	else
	
	if (D>C && C>A && A>B && B>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, A, B, E";
	}
	else
	
	if (D>C && C>A && A>E && E>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, A, E, B";
	}
	else
	
	if (D>C && C>B && B>A && A>E)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, B, A, E";
	}
	else
	
	if (D>C && C>B && B>E && E>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, B, E, A";
	}
	else
	
	if (D>C && C>E && E>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, E, A, B";
	}
	else
	
	if (D>C && C>E && E>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, C, E, B, A";
	}
	else
	
	if (D>E && E>A && A>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, A, B, C";
	}
	else
	
	if (D>E && E>A && A>C && C>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, A, C, B";
	}
	else
	
	if (D>E && E>B && B>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, B, A, C";
	}
	else
	
	if (D>E && E>B && B>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, B, C, A";
	}
	else
	
	if (D>E && E>C && C>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, C, A, B";
	}
	else
	
	if (D>E && E>C && C>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "D, E, C, B, A";
	}
	else
	
	if (E>A && A>B && B>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, B, C, D";
	}
	else
	
	if (E>A && A>B && B>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, B, D, C";
	}
	else
	
	if (E>A && A>C && C>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, C, B, D";
	}
	else
	
	if (E>A && A>C && C>D && D>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, C, D, B";
	}
	else
	
	if (E>A && A>D && D>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, D, B, C";
	}
	else
	
	if (E>A && A>D && D>C && C>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, A, D, C, B";
	}
	else
	
	if (E>B && B>A && A>C && C>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, A, C, D";
	}
	else
	
	if (E>B && B>A && A>D && D>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, A, D, C";
	}
	else
	
	if (E>B && B>C && C>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, C, A, D";
	}
	else
	
	if (E>B && B>C && C>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, C, D, A";
	}
	else
	
	if (E>B && B>D && D>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, D, A, C";
	}
	else
	
	if (E>B && B>D && D>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, B, D, C, A";
	}
	else
	
	if (E>C && C>A && A>B && B>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, A, B, D";
	}
	else
	
	if (E>C && C>A && A>D && D>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, A, D, B";
	}
	else
	
	if (E>C && C>B && B>A && A>D)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, B, A, D";
	}
	else
	
	if (E>C && C>B && B>D && D>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, B, D, A";
	}
	else
	
	if (E>C && C>D && D>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, D, A, B";
	}
	else
	
	if (E>C && C>D && D>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, C, D, B, A";
	}
	else
	
	if (E>D && D>A && A>B && B>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, A, B, C";
	}
	else
	
	if (E>D && D>A && A>C && C>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, A, C, B";
	}
	else
	
	if (E>D && D>B && B>A && A>C)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, B, A, C";
	}
	else
	
	if (E>D && D>B && B>C && C>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, B, C, A";
	}
	else
	
	if (E>D && D>C && C>A && A>B)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, C, A, B";
	}
	else
	
	if (E>D && D>C && C>B && B>A)
	{
		cout << "Jadi urutan nilai dari yang terbesar adalah " << "E, D, C, B, A";
	}
	else
	{
	}
	return 0;
	
	
	
}
