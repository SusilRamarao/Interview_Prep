#include <boost/interprocess/shared_memory_object.hpp>
#include <boost/interprocess/mapped_region.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <cstring>
#include <cstdlib>
#include <string>
#include<iostream>

using namespace boost::interprocess;

int main(int argc, char *argv[])
{

    //Remove shared memory on construction and destruction
    struct shm_remove
    {
        shm_remove() { shared_memory_object::remove("MySharedMemory"); }
        ~shm_remove(){ shared_memory_object::remove("MySharedMemory"); }
    } remover;

    managed_shared_memory segment(create_only, "MySharedMemory", 65536);
    std::cout<<"Free memory before "<<segment.get_free_memory();
    void *memory = segment.allocate(1024);
    std::cout<<"Free memory before "<<segment.get_free_memory();

    //Write all the memory to 1
    std::memset(memory, 1, segment.get_size());



/*
   else{
      //Open already created shared memory object.
      shared_memory_object shm (open_only, "MySharedMemory", read_only);

      //Map the whole shared memory in this process
      mapped_region region(shm, read_only);

      //Check that memory was initialized to 1
      char *mem = static_cast<char*>(region.get_address());
      for(std::size_t i = 0; i < region.get_size(); ++i)
         if(*mem++ != 1)
            return 1;   //Error checking memory
   }
            */
   return 0;
}