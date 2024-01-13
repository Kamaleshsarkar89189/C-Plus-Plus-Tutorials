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

    
    Variable: A named piece of memory taht you use to store specific types of data.

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

*/