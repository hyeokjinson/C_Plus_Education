

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#pragma warning(disable:4996)
using namespace std;
int main()
{
	int num = 0;
	FILE* logfile = fopen("test.pat", "a+");
	FILE* expect_val = fopen("expect.log", "a+");
	uint32_t pre_num = 0;
	uint32_t bit_num = 1;
	vector<uint32_t> v(32,~pre_num);

	for (int i = 0; i < (int)v.size(); i++) {
		for (int j = 0; j < 32; j++) {
			if (rand() % 2 == 0) {
				fprintf(logfile, "NOOP RB0\n");
				
			}
			else {
				fprintf(logfile, "NOOP\n");
				v[i] &= ~(1 << j);
			}
		}
		fprintf(expect_val, "DUTBIT[%d]:%X\n",i,v[i]);
	}
	
	fclose(expect_val);
	fclose(logfile);
}

