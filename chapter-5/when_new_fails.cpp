/*

When 'new' fails
'new' fails very rarely in practice and you'll see many programs that assume that it always works and 
don't check for memory allocation failure in any way. Depending on your application, fails memory alloccations can be very bad and you need to check and handle them

Simulating memory allocation failure 

Try to allocate a insanely huge array in one go
//Unhandled new failure : Crash

int * lots_of_ints1 {new int[10000000000000000000]}; //May give an error about exceeding array size.
//use a huge loop to try and exhaust the memory capabilities of your syatem. When new fails, your program is going to forcefuly terminate.

for(size_t i{}; i < 100000000000000000; ++i){
    int* lots_of_ints2 { new int[10000000000]};
}

checking for faild memory allocations
. Through the exception mechanism
. The std::nothrow setting

The exception mechanism

Handling the exception

    Handle the problem in a a way that makes sense for your application.
    For example if you were trying to allocate memory to store color information
    for your application, and allocation, and allocation fails, you could opt for showing some
    feedback message to the user, and rendering your app n black/white.
    
*/
for( size_t i{}; i < 10000000000000 ; ++i){
    try{
        int * lots_of_ints3 { new int[1000000000]};
    }catch(std::exception& ex){
        std::cout << "Cought exception ourselves : " << ex.what() << std::endl;
    }
}