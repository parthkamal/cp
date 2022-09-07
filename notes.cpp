// cpp is a hardware driven language we can pretty much control much more conviniently with cpp
//how cPP works
#include<iostream> //preprocessor statement-processed just before the compilation

//main function is called the entry point of our application
//iostream is a header file

//steps of generating exe preprocessor statemnet->obj files-> linker links obj files to create exe(a obj file is for a single cpp file)

void function(int i){
    std::cout<<"hello from the notes cpp file"<<std::endl;
}


void function(int n){
    std::cout<<n<<std::endl;
}
