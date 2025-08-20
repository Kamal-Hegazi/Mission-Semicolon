#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int y, x; cin  >> y >> x;
	bool flip = false;
	int pile = 0;

	for (int i = 0; i < y; i++) {
		if (pile % 2 == 0) {
			for (int j = 0; j < x; j++) {
				cout << "#";
			}
		}
		else {
			cout << "\n";
			if (!flip) {
				for (int j = 0; j < x - 1; j++) {
					cout << ".";
				}
				cout << "#\n";
				flip = !flip;
			}
			else if (flip) {
				cout << "#";
				for (int j = 0; j < x - 1; j++) {
					cout << ".";
				}
				cout << "\n";
				flip = !flip;
			}
		}
		pile++;
	}
}
