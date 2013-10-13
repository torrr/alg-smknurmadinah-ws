// Input Output (IO): monitor 
#include <iostream> // for std::cout

int // return value (nilai yg akan dikembalikan)
main(int argc,char* argv[]) // nama fungsi: main
{
//  // Variable
////  int i;// Declaration
//  int i = 0;// Definition -> Declaration + initialization
//  std::cout << "(sebelum assignment) i= " << i << std::endl;
//  
//  i = 7;// Assignment
//  std::cout << "(sesudah assignment) i= " << i << std::endl;
//  
//  // Reference (alias)
//  int& r = i;// i mempunyai nama alias r
//  std::cout << "r= " << r << std::endl;
//  
//  r = 10;// Assignment
//  std::cout << "r= " << r << std::endl;
//  std::cout << "i= " << i << std::endl;
//  
//  // Pointer
//  int* p = 0; // initialize with NULL pointer
//  p = &i;// Assignment: pointer p dengan alamat dari i
//  
//  std::cout << "p= " << p << std::endl;
//  std::cout << "*p= " << *p << std::endl;// deference p
//  std::cout << "&i= " << &i << std::endl;
  
  // Array
  int a[3];// declaration tanpa initialization
  for(int i=0; i<3; ++i)
  {
    std::cout << "a[" << i << "]= " << a[i] << std::endl; 
  }
  
  a[0] = 1;// [] -> subscripting operator
  a[1] = 2;
  a[2] = 3;
  
  for(int i=0; i<3; ++i)
  {
    std::cout << "a[" << i << "]= " << a[i] << std::endl; 
  }
  
  int a2[] = {4,5,6};// Definition
  
  for(int i=0; i<3; ++i)
  {
    std::cout << "a2[" << i << "]= " << a2[i] << std::endl; 
  }
  
  return 0;
} // end of main()
