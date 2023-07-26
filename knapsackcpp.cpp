#include <iostream.h>
#include<conio.h>
using namespace std;
struct Item
{
float weight;
int value;
};
struct Node
{
int level, profit, bound;
float weight;
};
bool cmp(Item a, Item b)
{
double r1 = (double)a.value / a.weight;
double r2 = (double)b.value / b.weight;
return r1 > r2;
}
int bound(Node u, int n, int W, Item arr[])
{
if (u.weight >= W)
return 0;
int profit_bound = u.profit;
int j = u.level + 1;
int totweight = u.weight;
while ((j < n) && (totweight + arr[j].weight <= W))
{
totweight += arr[j].weight;
profit_bound += arr[j].value;
j++;
}
if (j < n)
profit_bound += (W - totweight) * arr[j].value /arr[j].weight;
return profit_bound;
}