#include <bits/stdc++.h>

using namespace std;

struct Obstacle {
	vector<pair<int, int>> points;
	Obstacle() {
		for(int i = 0 ; i < 3 ; i++) {
			int x, y ; cin >> x >> y;
			points.push_back({x, y});
		}
	}
};

int main(int argc, char **argv) {
	freopen("input_1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	// freopen(argv[0], "r", stdin);
	// freopen(argv[1], "w", stdout);
	// freopen("error.txt", "w", stderr);
	int xs, ys, xf, yf; cin >> xs >> ys >> xf >> yf;
	int n; cin >> n;
	vector<Obstacle> v;
	for(int i = 0 ; i < n ; i++) {
		v.push_back(Obstacle());
	}
	
}