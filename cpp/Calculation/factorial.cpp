#include <bits/stdc++.h>
using namespace std;
struct Bag {
	int value, weight;
	Bag(int value, int weight)
	{
		this->value = value;
		this->weight = weight;
	}
};
static bool cmp(struct Bag a, struct Bag b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}
double Knapsack(int W, struct Bag arr[], int N)
{
	sort(arr, arr + N, cmp);
	double finalvalue = 0.0;
	for (int i = 0; i < N; i++) {
		if (arr[i].weight <= W) {
			W -= arr[i].weight;
			finalvalue += arr[i].value;
		}
		else {
			finalvalue
				+= arr[i].value
				* ((double)W / (double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}
int main()
{
	int W = 50;
	Bag arr[] = { { 10, 3 }, { 7, 5 }, { 15, 6 } };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout <<Knapsack(W, arr, N);
	return 0;
}
