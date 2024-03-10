/*
Variable Datatypes

    There are some commonly used datatypes in below

        int     double     float    char
        bool    void       auto     ...

    Number Systems

        1.Binary
        2.Octal
        3.Hexadecimal



    --> All data is represented by a bunch of grouped cells fo 0's and 1's in memory
    --> As the range of your data grows, so will the number of digits you need to represent 
    the data in memory
    --> Hexadecimal system makes it a little easier for humans to handle streams of data will 1's and 0's
    -->Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times. It's just
    mentioned here for your awareness.



    Integers:
        
        int -->  Store decimals
            -->  Typically occupies 4 bytes or more in memory

    
    Variable: A named piece of memory that you use to store specific types of data.

        //Variable may contain random garbage value . WARNING
        int elephant_count;

        int lion_count{}; //Initializes to zero

        int dog_count{20}; //Initializes to 20

        int tiger_count{5}; //Initializes to 5

        //Can use expression as intializer
        int domesticated_animal{ dog_count + cat_count };
        
        //Won't compile, the expression in the braces used undercleared variables
        int bad_initialization { doesnt_exist1 + doesnt_exist2 };

        //2.9 is of type double, with a wider range than int.  ERROR OR WARNING.
        int narrowing_conversion{2.9};


Assignment Initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;


Variable Initialization

    typename variable_name {intializer_value};



    <--Integer Modifier-->

        Positive And Negative numbers

        int value1 {10};
        int value2{-20};

        signed int value1 {20};
        signed int value2 { -34};

        unsigned range : [0 ~ 2^n - 1]

        signed range : [-2^n-1 ~ 2^n-1 - 1]

        *n is the number of bits for a type in memory



     Type with modifier             Bytes in memory         Range 
     unsigned int                       4                   [0, 4,294,967,295]
     signed int                         4                   [-2,147,483,648,2,147,483,747]

     We can flag our integer types as short or long.

     shrotshort_var { -3345}; // 2 bytes
     short int short_int { 245};
     signed short signed_short { 122};
     signed short int unsigned_short_int { 345};

     int int_var {55}; //4 bytes
     signed signed_var {66};
     signed int signed_int{77};
     unsigned int unsigned_int{77};

     long long_var{88}; //4 or 8 bytes
     int long long_int{33};
     signed long signed_long {44};
     signed long int unsiged_long_int {44};

     lonh long long_long {334};//8 bytes
     long long int long_long_int {999};
     signed long long signed_long_long {444};
     signed long long int signed_long_long_int {1244};
     unsigned long long int unsigned_long_long_int {1234};


        Note: These modifiers only apply to integral types: those in which you can store decimal numbers
        



    Fractional Numbers : They are aslo called Floating Point Typpes


    Types          Size         Precision       Comment
    float          4                7           -
    double         8                15          Recommended default
    long double    12               > doubles   


                Precison is basically the number of bits you can represent with that type 
                starting from the number in front of the decimal point.
                    Ex- 1.2346700001, The precision here is 12

    Declare and initialize the variables

    float number1 {1.234567890789f};
    double number2 {1.23456768768980};
    long double number3 {1.12345678903456L};

    Print out the sizes
    std::cout <<"sizeof float : " << sizeof(float) << std::endl;
    std::cout <<"sizeof double : " << sizeof(double) << std::endl;
    std::cout <<"sizeof long double : " << sizeof(long double) << std::endl;


    Precison

    std::cout << std::setprecison(20);  //Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15 digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    Precison gone wrong
        float number4 {192400023}; //float take 7 digits 

        float number4 (192400023);
        number4 = number4 + 1;
        std::cout << " Number4 is : " << number4 <<std::endl;


    Scientific Notation

    double number5 {192400023};
    double number6 {1.92400023e8};  "e" means 10 to the power 8
    double number7 {1.924e8};
    double number8 {0.000000000003498};
    double number9 {3.498e-11}; this means 10 to the power -11


    ** n(floating point)\0 ----> Infinity (+\-)

    0.0\0.0 ---->NaN //That is called naughty number


        double number10 {6.5};
        double number11 {}; //Initializing to 0
        double number12 {}; //Initializing to 0

        //Infinity result {number10/number11};

        std::cout << numner10 << "/" << number11 << "yields" << result <<std::endl;
        std::cout << result << "+" << number10 << "yields" << result = number10 <<std::endl;


        //NaN
        result = number11/number12;
         std::cout << number << "/" << number12 << "=" << result << std::endl;


        --> Remember the suffixes when initializing floating point variables, otherwise the default will be double

        --> Double works well in many situations, so you will see it used a lot



    Booleans
        Booleans are tyep that can store two states in C plus plus, it can store either true or false

        syntax:

        bool red_light {true};
        bool green_light {false};

        if(red_light == true){
            std::cout << " stop!" << std::endl;
        }else{
            std::cout << "Go through!" <<std::endl;
        }

        if(green_light){
            std::cout << "The light is green!" <<std::endl;
        }else{
            std::cout << "The light is NOT green!" <<std::endl;
        }




        Characters and Text

            char character1 {'K'};
            char character2 {'I'};
            char character3 {'S'};
            char character4 {'A'};
            char character5 {'N'};

            std::cout << character1 << std::endl;
            std::cout << character2 << std::endl;
            std::cout << character3 << std::endl;
            std::cout << character4 << std::endl;
            std::cout << character5 << std::endl;

    It is possible to assign a valid ASCII code to a char variable, and the corresponding 
    character will be stored in. You can choose to interpret that either as a character or a 
    regular integral value

    char value = 65; //ASCII  character code for 'A'
    std::cout << "valaue : " << value <<std::endl;
    std::cout << "valaue(int) : " << static_cast<int>(value) <<std::endl;

    --> ASCII was among the first encodings to represent text in a computer.
    -->It falls short when it comes to represent language other than English and a few
    western languages. Think Arabic, East Asian Languages likee Japanese, Chinese...
    --> There are better ways to represent text that is meant to be seen in different 
    languages, one of the most common being Unicode
    --> The details of Unicode are out of scope for this course, just know that it's a 
    robust way to represent text in different languages for a computer


    Auto :
        Let the compiler deduce the type

    When we have longer type names that are really hard to type

    Ex:  
            auto var1 {12};
            auto var2 {13.0};
            auto var3 {14.0f};
            auto var4 {15.0l};
            auto var2 {'e};

        //int modifier suffixes
        auto  var6 {123u}; //unsigned
        auto  var7 {123ul}; //unsigned long
        auto  var8 {123ll}; //long long


    std::cout << "var1 occupies : " << sizeof(var1) << "bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << "bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << "bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << "bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << "bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << "bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << "bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << "bytes" << std::endl;




Assignments
    
    int var1{123}; //Declare and initialize
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; //Assign
    std::cout << "var1 : " << var1 << std::endl;
    std::cout << std::endl;


    bool state{false}; // Declare and initialize
    std::cout << "state : " << state < std::endl;

    state = true; // Assign
    std::cout << "state : " <<state << std::endl;

    // Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    var = -22; // Assign negative number. DANGER!

    std::cout << "var3 : " << var3 << std::endl;

    