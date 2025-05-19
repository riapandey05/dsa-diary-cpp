// follows fifo mechanism, it is a container which stores elements
// in a linear fashion, the first element added is the first one to be removed          
// has 4 operations
// push - to add an element
// pop - to remove an element (from first)
// front - to get the front element (wont delete it,just returns it)    
// back - to get the back element (wont delete it,just returns it)
// isEmpty - to check if the queue is empty

// now let us implement queue using array
#include <iostream>
using namespace std;
class Myqueue{
    private:
        int arr[1000];
        int front;
        int end;
    public:
        Myqueue(){
            front = -1;
            end = -1;
        }
    void push(int x){

    }
};