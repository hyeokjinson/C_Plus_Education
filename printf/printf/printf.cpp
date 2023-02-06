#include<cstdio>
#include<cstdlib>
#include <iostream>
#include<fstream>
#pragma warning(disable:4996)

using namespace std;
int main() {
	FILE* fp;

	fp = fopen("example.log", "w+");
	fprintf(fp, "example code 1");
	fclose(fp);

	printf("Hello %d\n", 10);
	printf("%08X\n", 255);

	printf("%f-%f=%lf\n", 2.0, 3.0f, -1.0f);

	printf("%x+%x=%X\n", 10, 10, 20);

	//freopen("output.log", "w", stdout);
	
	printf("Hello World\n");
}