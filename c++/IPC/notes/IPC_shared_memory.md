InterProcessCommunication has two types
1. Shared Memory
2. Message Passing

Shared Memory
1. When two processes are started, they are allocated separate block of memory (or) processes address space.
2. OS has a mechanism called privilige instructions, which helps the two processes operate in their own address space and prevents processes to access other process's address space.
3. If a process accesses other process's address space then the process trying to access will be terminated by the OS.

NOW then how shared memory is allocated
1. Now the process who wants to create shared memory needs to do few system calls to OS, to allocate/extend the process's memory address space.
2. The other processes which wants to access the above same address space, should do system calls to OS and register their process ids to that address space.

Note: OS doesn't govern this shared memory space. which means
1. Processes that registered themselves to that address space can access/write data without any issues.
2. BUT THERE IS AN ISSUE... In a producer consumer environment, when the producer writes a certain data in the shared memory space, in a int8[] data bytes format and when the consumer tries to read the data bytes as uint8[] bytes format, the data that is passed will be erroneus.
3. The processes that access the data in the shared memory space should know how to communicate between them.