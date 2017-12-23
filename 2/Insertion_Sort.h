#ifndef __INSERTION_SORT_H__
#define __INSERTION_SORT_H__

#include <vector>

/*
≤Â»Î≈≈–ÚÀ„∑®
*/
class Insertion_Sort
{
public:
	int sort(std::vector<int>& out_Vec)
	{
		if (out_Vec.size() <= 1)
		{
			return 0;
		}

		int iSize = out_Vec.size();
		for (int j = 1; j < iSize; ++j)
		{
			int tmp = out_Vec[j];

			// ≤Â»Îtmp
			int i = j - 1;
			while (i >= 0 && out_Vec[i] > tmp)
			{
				out_Vec[i + 1] = out_Vec[i];
				i--;
			}

			out_Vec[i+1] = tmp;
		}

		return 0;
	}
};

#endif