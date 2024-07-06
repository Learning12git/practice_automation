#include<iostream>
main()
{

    //for loop with multiple declerations
    for(size_t i{}, x{5},y{10}; y<20; ++i, x+=2,y+=5)
    {
        std::cout<<"i - "<<i<<"  , x - "<<x<<"  , y - "<<y<<std::endl;
        std::cout<<"check"<<std::endl;

    }


    // comma operator



    //The comma operator combines
    //two or more  expressions into a single expression,
    // where the value of the operation is the value of its right operand
    
    int increment {5};
    int number1 {10};
    int number2 {20};
    int number3 {25};
    // std::cout<<"cout - "<<number2 - (++increment)<<std::endl;//14
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    std::cout << "number1 : " << number1 << std::endl; // 60
    std::cout << "number2 : " << number2 << std::endl; // 20   As this is not stored in number2
    std::cout << "number3 : " << number3 << std::endl; // 33
    std::cout << "result : " <<  result << std::endl; // 33
   
    std::cout<<std::endl;
   //Range based for loop
   int value[]{1,2,3,4,5,6,7,8,9};

   std::cout<<" Range based out - "<<std::endl;

   for (auto x:value)
   {
    std::cout<<x<<std::endl;
   }

   std::cout<<std::endl;

   //Character

   char msg[]{"ashwini"};
   for(auto i : msg)
   {
    std::cout<<i<<std::endl;
   }

   std::cout<<std::endl;
   //Sting in loop
    const size_t length{15};
   char names[][length]{"Ashwini", "Anand", "Manith"};
   for(auto i:names)
   {
    std::cout<<i<<std::endl;
   }

}
