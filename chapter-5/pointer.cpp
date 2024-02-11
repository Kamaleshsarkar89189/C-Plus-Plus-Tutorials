/*
Pointer
    A pointer is a special kind of variable that can store addresses to other variables in our c ++ code.

Declaring Pointers

    int *p_number {}; //Can only store an address of a variable of type int
    double *p_fractional_number{}; // Can only store an address of a variable of type double

    //Explicitely initialize to nullptr.
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr}; 

    //All pointer variable have the same size
    std::cout << "Size of number pointer : " << sizeof(p_number) << ", size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number pointer : " << sizeof(p_fractional_number) << ", size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of number1 pointer : " << sizeof(p_number1) << ", size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number1 pointer : " << sizeof(p_number) << ", size of double : " << sizeof(double) << std::endl;


    //Position of the * doesn't matter

    int* p_number2{nullptr};  // All work the same int *p_number4 format is easier to 
    int * p_number3{nullptr};  // understand when you have multiple variables declared on
    int *p_number4{nullptr};   // on the same line

    int *p_number5{}, other_int_var{}; //Confusing as you wonder if other_int_var6 is also a pointer to int. It is not the structure is exactly the same for the previous statement 
    int *p_number6{}, other_int_var6{};

    //It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time

    

    //Assigning data to pointer variables
    //initialising pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int_{&int_var};  //The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int << std::endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};

    int_var1 = 123;

    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address) : " << p_int << std::endl;

    //Pointer only stores the type for which it was declared
    int *p_int1{nullptr};
    double double_var{3333};
    
    //p_int1 = &double_var; //compiler error




    //Pointer to Char
     
     //Can use normal pointer to char like we've been doing for double, int and anything else really.
     char *p_char_var {nullptr};
     char char_var {'A};

     p_char_var = &char_var;

     std::cout << "The value stored in p_char_var is : " << * p_char-var << std::endl;

     char char_var1 {'C};
     p_char_var = &char_var1;

     std::cout << "The value stored in p_char_var is : " << * p_char_var << std::endl;

     //Initialize with string literal

     //Pointer to char can also do something special.
     //You can initialize with a string literal : C-String

     char * p_message {Hello Kisan!};

     //Printign out

     char * p_message {"Hello Kisan!};

     //Printing out
     //waht do we get when we print this out with std::cout 
     std::cout << "The message is : " << p_message << std::endl;

     //What do we get when we dereference the pointer
     std::cout << "The value stored at p_message is : " << * p_message << std::endl;



     //Th string literal is made up of const char. Trying to modify any of them will result in a disaster!

     *p_message = 'B'; //We want the message to say Bello Kisan!
     std::cout << "The message is (after modification of first char to B) : " << p_message << std::endl;

    //Can modify the pure array initialized with string literal

    char message2[] {Hello Kisan!};
    message2[0] = 'T';
    std::cout << "Message2 : " << message2 << std::endl;
    
//Program Memory Map Revisited

    Virtual memory
        
        A trick that fools your program into thinking it is the only program running on your OS, and
        all memory resources belong to it. Each program is abstracted into a process, and each process has access to the
        memory range 0 ~ 2^N-1 where N is 32 on 32 bit systems and 64 on 64 bit systems.

    Real Memory(RAM)            Virtual memory(2^N-1)

    Memory Management Unit
        The entire program is not loaded in  real memory by the CPU and MMU. Only parts 
        that are about to be executed are loded. Making effective use of real memory, a valuable and lacking resource.

    Virtual memory:
     The memory map is a standard format defined by the OS. All program written for that OS must conform to it.
     It is usually divided into some sections



     Memory map What does it look like:

        System
        Stack   //local variables, function calls...
        Heap  //Additional memory that can be queried for at run time
        Data
        Text
    
    

    Dynamic Memory Allocation


        Satck                                                       Heap
    . Memory is finite                          . Memory is finite
    . The developer isn't in full               . The developer is in full control of when 
      full control of the memory lifetime         memory is allocated and when it's released
    . Lifetime is controlled by the scope 
      mechanism                                 . Lifetiem is controlled explicitly through new and delete operators


      

