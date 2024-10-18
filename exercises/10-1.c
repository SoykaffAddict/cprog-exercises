int a;

void f(int b){
	int c;
}

void g(void){
	int d;
	{
		int e;	
	}
}

int main(void){
	int f;
}

// () is a parameter

//(a) The f function
// a, (b), c;

//(b) The g function
// a, d;

//(c) The block in which e is declared
// a, d, e;

//(d) THe main function
// a, f;
