#include <iostream>
#include <conio.h>
#include "utils.h"

#define SIZE 10 

void print_nums(int* nums, unsigned int size)
{
	unsigned int i = 0;
	std::cout << "nums[]:";
	for (i = 0; i < size; i++)
	{
		std::cout << " " << nums[i];
	}
	std::cout << "\n";
}

void reverse(int* nums, unsigned int size)
{
	std::cout << "nums befor reverse\n";
	print_nums(nums, size);
	unsigned int i = 0, top = 0, bot = 0;
	int	vtop = 0, vbot = 0;
	top = 0;
	bot = size - 1;
	while (top < bot)
	{
		vtop = nums[top];
		vbot = nums[bot];
		// swap
		nums[top] = vbot;
		nums[bot] = vtop;
		top++;
		bot--;
	}
	std::cout << "nums after reverse\n";
	print_nums(nums, size);
}

int* reverse10()
{
	int* nums = NULL;
	int num = 0;
	unsigned int size = SIZE;
	unsigned int i = 0;
	char c = 0;
	nums = new int[size];

	std::cout << "Insert 10 integer numbers \n";
	for (i = 0; i < size; i++)
	{
		std::cout << "Insert an integer number for index " << i << " ";
		std::cin >> num;
		nums[i] = num;
	}
	std::cout << "Input of nums[]: ";
	print_nums(nums, size);
	reverse(nums, size);
	std::cout << "backward nums[]: ";
	print_nums(nums, size);

	std::cout << "\n\n End of test. Press any key to exit...";
	return nums;
}

