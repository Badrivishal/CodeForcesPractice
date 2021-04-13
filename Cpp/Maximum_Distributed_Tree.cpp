#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

#define mod (long long int)(pow(10, 9) + 7)

class Node
{
public:
	vector <Node*> adj;
	long long int subTreeSize = 0;
	int val;

	void dfs(Node* par)
	{
		this->subTreeSize = 1;
		for (int i = 0; i < this->adj.size(); i++)
		{
			Node* nn = this->adj[i];
			if (nn != par)
			{
				nn->dfs(this);
				this->subTreeSize += nn->subTreeSize;
			}
		}
	}
	
	Node(int val)
	{
		this->val = val;
	}

	void print_Nodes(vector <Node*> a)
	{
		for (auto nn : a)
		{
			cout << nn->val << " (" << nn->adj.size() << ") : ";
			for (int i = 0; i < nn->adj.size(); i++)
			{
				cout << nn->adj[i]->val << " ";
			}
			cout << endl;
		}
	}
};


int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n, i, j, temp1, temp2;
		cin >> n;
		vector<Node*> nodes;
		for (i = 0; i < n; i++)
		{
			auto a = new Node(i);
			nodes.push_back(a);
		}
		for (i = 1; i < n; i++)
		{
			cin >> temp1 >> temp2;
			nodes[temp1 - 1]->adj.push_back(nodes[temp2 - 1]);
			nodes[temp2 - 1]->adj.push_back(nodes[temp1 - 1]);
		}
		int NoPrimes;
		long long int* finalPrimes = new long long int[n - 1];
		long long int temp3;
		cin >> NoPrimes;
		vector <long long int> Primes;
		for (i = 0; i < n-1; i++)
		{
			finalPrimes[i] = 1;
		}
		for (i = 0; i < NoPrimes; i++)
		{
			cin >> temp3;
			Primes.push_back(temp3);
		}
		random_shuffle(Primes.begin(), Primes.end());
		sort(Primes.begin(), Primes.end());

		j = 0;
		for (i = max(0, n - NoPrimes - 1); i < n-1 && j < NoPrimes; i++)
		{
			finalPrimes[i] = (finalPrimes[i] * Primes[j])%mod;
			j++;
		}
		while(j < NoPrimes)
		{
			finalPrimes[n - 2] = (finalPrimes[n - 2] * Primes[j])%mod;
			j++;
		}

		// random_shuffle(finalPrimes, finalPrimes + n - 1);
		// sort(finalPrimes, finalPrimes + n - 1);

		nodes[0]->dfs(NULL);
		long long int* visitVals = new long long int[n - 1];
		for (i = 0; i < n - 1; i++)
		{
			visitVals[i] = (n-nodes[i+1]->subTreeSize) * nodes[i+1]->subTreeSize;
		}
		
		random_shuffle(visitVals, visitVals + n - 1);
		sort(visitVals, visitVals + n - 1);

		long long int output = 0;
		for (i = 0; i < n-1; i++)
		{
			output = (output + ((visitVals[i]*finalPrimes[i]) % mod)) % mod;
		}

		cout << output << endl;

	}
	return 0;
}