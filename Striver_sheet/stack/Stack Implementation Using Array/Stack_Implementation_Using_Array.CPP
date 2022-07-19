// Stack class.
// Stack Implementation Using Array
class Stack {
     int last;
    int temp;
    int mx;
    int arr[10000];
public:
    Stack(int capacity) { 
        last=-1;
        mx=capacity;
        
    }
    void push(int num) {
        if(last==mx)
        {
            return;
        }
        last++;
        arr[last]=num;
    }
    int pop() {
        if(last==-1)
            return -1;
       else
       {
            temp=arr[last];
        last--;
        return temp;
       }
       
    }   
    int top() {
        if(last==-1 || last==mx)
        {
            return -1;
        }
      return arr[last];
    }
    int isEmpty() {
        
        if(last==-1)
            return 1;
        else
            return 0;
    }
    
    int isFull() {
        
        if(last>=mx)
        {
            return 1;
        }
        else
            return 0;
    }
    
};