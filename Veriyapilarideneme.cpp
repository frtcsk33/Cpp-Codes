//#include "Program.h"
#include <iostream>
#pragma once

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <memory>

namespace veriyapilari3
{

	class Program : public std::enable_shared_from_this<Program>
	{
	private:
		static void köşe_ekle(std::vector<std::list<int>&> &Komşu, int düğüm, int kenar);
		static void Grafı_yazdır(std::vector<std::list<int>&> &Komşu);
	public:
		static void Main(std::vector<std::wstring> &args);
	};
}


namespace veriyapilari3
{

	void Program::köşe_ekle(std::vector<std::list<int>&> &Komşu, int düğüm, int kenar)
	{
		Komşu[düğüm].push_back(kenar);
		Komşu[kenar].push_back(düğüm);

	}

	void Program::Grafı_yazdır(std::vector<std::list<int>&> &Komşu)
	{
		for (int i = 0; i < Komşu.size(); i++)
		{
			std::wcout << L"\nDüğüm komşuluk listesi" << i << std::endl;
			std::wcout << L"Baş_düğüm" << std::endl;

			for (auto nesne : Komşu[i])
			{
				std::wcout << L" --> " << nesne << std::endl;
			}
			std::wcout << std::endl;
		}
	}

	void Program::Main(std::vector<std::wstring> &args)
	{
		int kenar = 5;
		std::vector<std::list<int>> Komşu(kenar);

		for (int i = 0; i < 5; i++)
		{
			Komşu[i] = std::list<int>();

		}
		köşe_ekle(Komşu, 0, 1);
		köşe_ekle(Komşu, 0, 4);
		köşe_ekle(Komşu, 1, 2);
		köşe_ekle(Komşu, 1, 3);
		köşe_ekle(Komşu, 1, 4);
		köşe_ekle(Komşu, 2, 3);
		köşe_ekle(Komşu, 3, 4);
		std::getwchar();
	}
}
