IPC Message Passing
PIPES, SOCKETS, Remote Procedure Calls(RPC)

The basic idea of message passing is 
1. Processes that want to shared data doesn't need to share a process's memory address.
2. Processes that wants to send data will do certain system calls, which creates a queue/mailbox mechanism in OS's KERNEL's address space.
    NOTE: Since the mailbox is inside the kernel space, none of the processes can access that space. If it tries to, OS will kill the process and eventually the application, incase if the KERNEL has a bug which allows access then remember windows kernel security error incident.
3. Now if a process needs to send a data it needs to do a syscall called 
`send(MAILBOX_ID, data)`;x this sends the data to the mailbox.
4. Now if a process needs to receive a data it needs to do a syscall called 
`receive(MAILBOX_ID, data)`; this receives the data from the mailbox, if any present else nullptr.

