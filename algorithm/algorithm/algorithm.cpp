// algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "sort/bubble.h"

int _tmain(int argc, _TCHAR* argv[])
{
    int a[10] = {2,5,3,21,8456,234,13,1,42,324};

    bubblesort(a, 10);  //ð��

    printArray(a, 10);

    system("pause");
	return 0;
}
