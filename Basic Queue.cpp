#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
int main()
{
    char s[500];
    int i;
    queue<int>integer_queue; //queue declaration
    queue<char>Char_queue; //queue declaration
    gets(s);
    for(i=0; s[i]!=NULL; i++)
    {
        integer_queue.push(s[i]); // insertion in queue
        Char_queue.push(s[i]);  // insertion in queue
    }
    while(!integer_queue.empty())
    {
        printf("%d ", integer_queue.front());
        integer_queue.pop(); // deletion in queue
    }
    printf("\n\n");
    while(!Char_queue.empty())
    {
        printf("%c ", Char_queue.front());
        Char_queue.pop(); // deletion in queue
    }
    return 0;
}

