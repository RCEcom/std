//Author : RCEcom
#include <iostream>
#include <string.h>

namespace mystd
{
	void myendl()
	{
		printf("\n");
	}

	class CMyOStream
	{
	public:
		void precisions(float _idata, int c);
		void precisions(double _idata, int c);
		void precisions(long double _idata, int c);
	public:
		CMyOStream& operator << (int _idata)
		{
			printf("%d", _idata);
			return *this;
		}
		CMyOStream& operator << (const char* _idata)
		{
			printf("%s", _idata);
			return *this;
		}
		CMyOStream& operator << (float _idata)
		{
			printf("%f", _idata);
			return *this;
		}
		CMyOStream& operator << (double _idata)
		{
			printf("%f", _idata);
			return *this;
		}
		CMyOStream& operator << (long double _idata)
		{
			printf("%Lf", _idata);
			return *this;
		}
		CMyOStream& operator << (void(*pfuc)(void))
		{
			pfuc();
			return *this;
		}
	};

	class CMyOstream_input
	{
	public:
		void get(char buf[], unsigned int _size);
		void fget(char buf[], unsigned int _size);
	public:
		CMyOstream_input& operator >> (int& _idata)
		{
			scanf_s("%d", &_idata);
			return *this;
		}
		CMyOstream_input& operator >> (char* _idata)
		{
			scanf_s("%s", _idata, sizeof(_idata));
			return *this;
		}
		CMyOstream_input& operator >> (float& _idata)
		{
			scanf_s("%f", &_idata);
			return *this;
		}
		CMyOstream_input& operator >> (double& _idata)
		{
			scanf_s("%f", &_idata);
			return *this;
		}
		CMyOstream_input& operator >> (long double& _idata)
		{
			scanf_s("%Lf", &_idata);
			return *this;
		}

	};
	CMyOstream_input mycin;
	CMyOStream mycout;
	void CMyOstream_input::get(char *buf, unsigned int _size)
	{
		scanf_s("%s", buf, _size);
	}
	void CMyOStream::precisions(float _idata, int c)
	{
		if (c == 2)
		{
			printf("%.2f", _idata);
		}
		if (c == 3)
		{
			printf("%.3f", _idata);
		}
		if (c == 4)
		{
			printf("%.4f", _idata);
		}
	}
	void CMyOStream::precisions(double _idata, int c)
	{
		if (c == 2)
		{
			printf("%.2f", _idata);
		}
		if (c == 3)
		{
			printf("%.3f", _idata);
		}
		if (c == 4)
		{
			printf("%.4f", _idata);
		}
	}
	void CMyOStream::precisions(long double _idata, int c)
	{
		if (c == 2)
		{
			printf("%.2f", _idata);
		}
		if (c == 3)
		{
			printf("%.3f", _idata);
		}
		if (c == 4)
		{
			printf("%.4f", _idata);
		}
	}
	void CMyOstream_input::fget(char *buf, unsigned int _size)
	{
		fgets(buf, _size, stdin);
	}
}

using mystd::mycin;
using mystd::mycout;
using mystd::myendl;
int main()
{
	char buf[2001]; //char buf[50]; ok :)
	mycin.fget(buf, 2000);
	mycout << buf << myendl;

	return 0;
}
