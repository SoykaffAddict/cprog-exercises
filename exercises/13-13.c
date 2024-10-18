#include <stdio.h>
#include <string.h>

void build_index_ulr(const char *domain, char *index_url);

int main(void)
{
	char url[100];

	build_index_ulr("knking.com", url);

	puts(url);
}

void build_index_ulr(const char *domain, char *index_url)
{
	char prefix[] = "http://www.";
	char sufix[] = "/index.html";
	char full_url[100];

	strcat(full_url, prefix);
	strcat(full_url, domain);
	strcat(full_url, sufix);

	strcpy(index_url, full_url);
}
