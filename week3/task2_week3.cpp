#include "Header.hpp"

void n2()
{
	std::vector <double> ans;
	auto n = 20U;
	auto i0 = 0.0;
	for (auto i = i0; i < i0 + n; i++)
	{
		ans.push_back(i);
	}
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(std::begin(ans), std::end(ans), g);

	std::cout << "Input array:\t";

	for (auto i : ans)
	{
		std::cout << i << " ";
	}

	sort_merge(ans);

	std::cout << "\nOutput array:\t";	

	for (auto i : ans)
	{
		std::cout << i << " ";
	}
	std::cout << '\n' << std::endl;
}


void merge(std::vector <double>& arr, unsigned left, unsigned middle, unsigned right)
{
	auto i = left;
	auto j = middle + 1U;
	std::vector <double> merged_arr;
	for (auto k = 0U; k < right - left + 1U; k++)
	{
		if ((j > right) || ((i <= middle) && (arr[i] < arr[j])))
		{
			merged_arr.push_back(arr[i]);
			i++;
		}
		else
		{
			merged_arr.push_back(arr[j]);
			j++;
		}
	}
	for (auto step = 0U; step < right - left + 1U; step++)
	{
		arr[left + step] = merged_arr[step];
	}

}


// sort array by merge in-place
int sort_merge(std::vector <double> &arr, unsigned left, unsigned right, unsigned CONST_INSERTIONS)
{
	if (std::size(arr) <= 1) 	return EXIT_SUCCESS;;
	if (right == 0U)		right = std::size(arr) - 1;

	if (right - left < CONST_INSERTIONS)
	{
		sort_insertion(arr, left, right);	
		return;
	}

	auto middle = left + (right - left) / 2U;
	sort_merge(arr, left, middle);
	sort_merge(arr, middle + 1, right);
	merge(arr, left, middle, right);
	return 0;
}	


void sort_insertion(std::vector <double>& arr, unsigned start, unsigned end)
{
	for (auto i = start + 1; i <= end ; i++)
	{
		for (auto j = i; j > start && arr[j - 1] > arr[j]; j--)
		{
			std::swap(arr[j], arr[j - 1]);		
		}
	}
}
