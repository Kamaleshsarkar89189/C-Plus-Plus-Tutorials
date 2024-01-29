#include<iostream>
#include<ios>
#include<iomanip>

int main(){
    // std::endl ---> 
            std::cout << "Hello";
            std::cout << "World";

            std::cout << std::endl;

            std::cout << "------------" << std::endl;

            std::cout << "Hello" << std::endl;
            std::cout << "World" << std::endl;
            
            std::cout << std::endl;

            std::cout << "Hello\n";
            std::cout << "World\n";

    // std::flush ----> Causes immediate sending of data to the device connected to the stream


    //set::setw()
    std::cout << "Uniformatted table : " << std::endl;
    std::cout << "Kisan" << " " << "Sarkar" << "20" << std::endl;
    std::cout << "Kamalesh" << " " << "Sarkar" << "20" << std::endl;
    std::cout << "Kamalesh" << " " << "Sarkar" << "20" << std::endl;
    std::cout << "Kamalesh" << " " << "Sarkar" << "20" << std::endl;
    std::cout << "Kamalesh" << " " << "Sarkar" << "20" << std::endl;
    

    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;

    std::cout << std::setw(10) << "Last name" << std::setw(10) << " First name" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;
    std::cout << std::setw(10) << "Sarkar" << std::setw(10) << "Kamalesh" << std::setw(5) << "20" << std::endl;


    // Right Justified

    int col_widht = 20;
    std::cout << std::right;
    std::cout << std::setw(col_widht) << "Lastname" << std::setw(col_widht) << "Firstname" <<std::setw(col_widht) << "Age" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::endl;

    //Left justified
    col_widht = 20;
    std::cout << std::left;
    std::cout << std::setw(col_widht) << "Lastname" << std::setw(col_widht) << "Firstname" <<std::setw(col_widht) << "Age" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;

    // Internal justified : sign is left justified, data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123 << std::endl;

    std::cout << std::endl;

    // setfill
    col_widht = 20;
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(col_widht) << "Lastname" << std::setw(col_widht) << "Firstname" <<std::setw(col_widht) << "Age" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;
    std::cout << std::setw(col_widht) << "Sarkar" << std::setw(col_widht) << "Kamalesh" << std::setw(col_widht) << "20" << std::endl;

    //boolalpha and noboolalpha : control bool output format : 1/0 or true/false 

    bool condition {true};
    bool other_condition{false};

    std::cout << "Condition : " << condition << std::endl;
    std::cout << "other_condition : " << condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Condition : " << condition << std::endl;
    std::cout << "other_Condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "Condition : " << condition << std::endl;
    std::cout << "other_Condition : " << other_condition << std::endl;

    //showpos
    int pos_num { 38};
    int neg_num { -59};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_pos : " << neg_num << std::endl;

    //Different number system : std::dec, std::hex, std::oct

    int pos_int {765456};
    int neg_int {-765456};
    double double_var {456.45};

    std::cout << std::endl;
    std::cout << "Default base format : " << std::endl;
    std::cout << "pos_int  : " << pos_int << std::endl;
    std::cout << "pos_int  : " << pos_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    //uppercase and nouppercase

    pos_int = 717171;
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    

    //fixed and scientific : for floating point values

    double a {3.56789234234563456345345};
    double b {2007.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "double value (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) :" << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl; 
    std::cout << "b : " << b << std::endl; 
    std::cout << "c : " << c << std::endl; 

    std::cout << std::endl;
    std::cout << "double values (scientific) :" << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl; 
    std::cout << "b : " << b << std::endl; 
    std::cout << "c : " << c << std::endl; 

    std::cout << std::endl;
    std::cout << "double values (back to defaults) :" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl; 
    std::cout << "b : " << b << std::endl; 
    std::cout << "c : " << c << std::endl; 

    std::cout << std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default 

    a = 3.123456789098765432234567678;

    std::cout << std::endl;
    std::cout << "a (default presicision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(20)) : " << a << std::endl;

    //If the precision is bigger than supported by the type, you'll just print garbage value

    std::cout << std::endl;
    return 0;
} 