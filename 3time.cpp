#include <iostream>

int main_3time() {
	using namespace std;

	int N;
	cin >> N;

	int Tcount = (N+1)*60*60; //total count from 00:00:00 ~ 23:59:59
	int Ncount = 0; //count that not involving 3

	for (int i = 0; i <= N; i++) {
		int ri = i % 10;
		if (ri != 3) {
			for (int j = 0; j < 60; j++) {
				int rj = j % 10;
				if (j < 30 && rj != 3) {
					for (int k = 0; k < 60; k++) {
						int rk = k % 10;
						if (k < 30 && rk != 3)
							Ncount++;
						else if (k > 39 && rk != 3)
							Ncount++;
						else continue;
					}
				}
				else if (j > 39 && rj != 3) {
					for (int k = 0; k < 60; k++) {
						int rk = k % 10;
						if (k < 30 && rk != 3)
							Ncount++;
						else if (k > 39 && rk != 3)
							Ncount++;
						else continue;
					}
				}
				else continue;
			}
		}
	}

	int count_3 = Tcount - Ncount;
	cout << Tcount << " " << Ncount << " " << count_3;
	return 0;
}