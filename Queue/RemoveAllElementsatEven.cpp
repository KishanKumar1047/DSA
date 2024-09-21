#include <iostream>
#include <queue>

using namespace std;

void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x);
    }
    cout << endl;
}
void removeEven(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        else
        {
            q.pop();
        }
    }
}

int main()
{
    queue<int> q; // by value
    // push , front/top,pop , back , size
    q.push(12);
    q.push(23);
    q.push(51);
    q.push(21);
    q.push(42);
    q.push(4);
    // to displasy queue
    display(q); // normal display
   removeEven(q);
    display(q);

    return 0;
}