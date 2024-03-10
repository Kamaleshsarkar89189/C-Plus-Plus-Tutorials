/*
Arrays allocated on the heap with the new operator. Can also use the std::nothrow version of new


*/
size_t size{10};

//Different ways you can declare an array dynamically and how they are initialized

double *p_salaries { new double[size]}; //Salaries array will contain garbage values

int *p_students { new(std::nothrow) int[size]{}}; //All values initialized to 0

double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double
                                                                //vars. First 5 will be initialized with 1,2,3,4,5 and the rest will be 0's.
                                                                