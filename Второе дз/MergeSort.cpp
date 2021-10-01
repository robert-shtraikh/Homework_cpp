#include <iostream>
#include <vector>

void TopDownMerge(int iBegin, int iMiddle, int iEnd, std::vector <int>& A)
{
	int i = iBegin, j = iMiddle;
	int B_COPY = iEnd - iBegin;
	std::vector <int> B(B_COPY);
	for (auto k = 0; k < B_COPY; k++)
	{
		if (i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{
			B[k] = A[i];
			i++;
		}
		else
		{
			B[k] = A[j];
			j++;
		}
	}
	for (auto j = 0; j < B_COPY; ++j)
	{
		A[static_cast<std::vector<int, std::allocator<int>>::size_type>(iBegin) + j] = B[j];
	}
}

void TopDownSplitMerge(int left, int right, std::vector <int>& A)
{
	if (right - left <= 1)
	{
		return;
	}
	int middle = (left + right) / 2;
	TopDownSplitMerge(left, middle, A);
	TopDownSplitMerge(middle, right, A);
	TopDownMerge(left, middle, right, A);
}
