int b, c;

void f(void){
	int b, d;
}

void g(int a){
	int c;
	{
		int a, d;	
	}
}

int main(void){
	int c, d;
}

// () inside parameter, {} inside block, {{}} inside multiple blocks

// (a) the f function
// {b}, c, d;

// (b) the g function
// (a), b, {c}

// (c) The block in which a and d are declared
// (a), b, {c}, d

// (d)  The main function
// b, {c}, d
