// class MyQueue {
//     stack<int>s1;
//     stack<int>s2;
// public:
//     MyQueue() {
        
//     }
    
//     void push(int x) {
//         s1.push(x);
//     }
    
//     int pop() {
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval=s2.top();
//         s2.pop();
//         return topval;
//     }
    
//     int peek() {
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval=s2.top();
//         // s2.pop();
//         return topval;
//     }
    
//     bool empty() {
//         if(s1.empty() && s2.empty()){
//             return true;
//         }
//         return false;
//     }
// };