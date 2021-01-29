#include <iostream>
#include <time.h>
#include <chrono>
#include "algorytmy.h"

using namespace std::chrono;

int main(){
	const int size = 100;
	srand(time(NULL));
	int* tab = new int[size];


	for (int i = 0; i < size; i++){
		tab[i] = rand() % 200 - 100; //liczby losowe <-100 ; 100>
		//tab[i] = size - i;
	}
	

	std::cout << "tab init: " << std::endl;
	print_tab(tab, size);
	std::cout << "sort tab: " << std::endl;
	auto start = high_resolution_clock::now();

	//hybrid_quicksort(tab, 0,size-1);
	//quicksort(tab, 0, size - 1);
	//quicksort_mediana(tab, 0, size - 1);
	//heapsort(tab, size);
	//quicksort_horae(tab, 0, size - 1);
	//bubble_sort(tab, size);
	//bubble_sort_true(tab, size);
	//merge_sort(tab, size);
	//merge_hybrid(tab, size);
	//insert_sort(tab, size);
	select_sort(tab, size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	print_tab(tab, size);
	std::cout << "time = " << duration.count() << " micros" << std::endl;
	system("pause");

	return 0;
}