#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    char s[500];
    int i;
    stack<int>integer_stack; //stack declaration
    stack<char>Char_stack; //stack declaration
    gets(s);
    for(i=0; s[i]!=NULL; i++)
    {
        integer_stack.push(s[i]); // insertion in stack
        Char_stack.push(s[i]);  // insertion in stack
    }
    while(!integer_stack.empty())
    {
        printf("%d ", integer_stack.top());
        integer_stack.pop(); // deletion in stack
    }
    printf("\n\n");
    while(!Char_stack.empty())
    {
        printf("%c ", Char_stack.top());
        Char_stack.pop(); // deletion in stack
    }
    return 0;
}
