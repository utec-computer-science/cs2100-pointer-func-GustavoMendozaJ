#include <iostream>
using namespace std;

void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i, int _k),int _tam_){
	for (int i = 0; i < _tam_ ; ++ i )
		for(int k = i+1; k < _tam_;++ k)
			_puntero_(_array_,i,k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){

	int *v = (int *)_vector_;
	
	// Conditional
	if (v[_k] < v[_i]) {
        // Swap elements
        int temp = v[_i];
        v[_i] = v[_k];
        v[_k] = temp;
        }

	// Return changes 
	_vector_ = v;
}

void  _b_float_ (void * _vector_, int _i,int _k){
// Vector as an float array
	float *v = (float *)_vector_;
	
	// Conditional
	if (v[_k] < v[_i]) {
        // Swap elements
        float temp = v[_i];
        v[_i] = v[_k];
        v[_k] = temp;
    }

	// Return changes 
	_vector_ = v;
}

void  _b_double_ (void * _vector_, int _i,int _k){
 // Vector as a double array
	double *v = (double *)_vector_;
	
	// Conditional
	if (v[_k] < v[_i]) {
        // Swap elements
        double temp = v[_i];
        v[_i] = v[_k];
        v[_k] = temp;
    }

	// Return changes 
	_vector_ = v;
}

void  _b_char_ (void * _vector_, int _i,int _k){
 // Vector as an char array
	char *v = (char *)_vector_;
	
	// Conditional
	if (v[_k] < v[_i]) {
        // Swap elements
        char temp = v[_i];
        v[_i] = v[_k];
        v[_k] = temp;
    }

	// Return changes
	_vector_ = v;
}

template<typename T, size_t n>
void printArray(T const(& arr)[n]) {
	for (size_t i = 0; i < n; ++i) 
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);	
	std::cout << std::endl << "BubbleSort - Int:" << std::endl; 
	printArray(_array_1);
	_bubblesort_(_array_2,_b_float_,5);
	std::cout << std::endl << "BubbleSort - Int:" << std::endl; 
	printArray(_array_2);
	_bubblesort_(_array_3,_b_double_,5);
	std::cout << std::endl << "BubbleSort - Int:" << std::endl; 
	printArray(_array_3);
	_bubblesort_(_array_4,_b_char_,6);
	std::cout << std::endl << "BubbleSort - Int:" << std::endl; 
	printArray(_array_4);
    return 0;
}