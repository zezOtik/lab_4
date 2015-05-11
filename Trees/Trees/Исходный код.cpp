/**
\file: main.cpp
*/
#include <iostream>

//! \brief void Pryamoy(...) - rekursivnyi vyvod pryamogo poryadka
void Pryamoy(int* Derevan, int N, int Cel)
{
	std::cout << Cel << ' ';
	for (int i = 0; i<N; i++)
		if (Derevan[i] == Cel)
			Pryamoy(Derevan, N, i + 1);
}
//! \brief void Obratnyi(...) - rekursivnyi vyvod obratnogo poryadka
void Obratnyi(int* Derevan, int N, int Cel)
{
	for (int i = 0; i<N; i++)
		if (Derevan[i] == Cel)
			Obratnyi(Derevan, N, i + 1);
	std::cout << Cel << ' ';
}

//! \brief void Simmetr(...) - rekursivnyi vyvod simmetrichnogo poryadka
void Simmetr(int* Derevan, int N, int Cel)
{
	int k = 1;
	for (int i = 0; i<N; i++)
		if (Derevan[i] == Cel)
		{
			Simmetr(Derevan, N, i + 1);
			if (k)
			{
				std::cout << Cel << ' ';
				k = 0;
			}
		}
	if (k) std::cout << Cel << ' ';
}

/*! \brief void main() - tochka vhoda v programmu
*	Chitaet derevo
*	Vyvodit 3 massiva */
void main()
{
	int N;
	int* Derevan;
	std::cout << "N = ";
	std::cin >> N;
	Derevan = new int[N];

	std::cout << "\nMassiv: ";
	for (int i = 0; i<N; i++)
		std::cin >> Derevan[i];

	Pryamoy(Derevan, N, 1);
	std::cout << "\n";
	Obratnyi(Derevan, N, 1);
	std::cout << "\n";
	Simmetr(Derevan, N, 1);
	std::cout << "\n";

	system("pause");
}