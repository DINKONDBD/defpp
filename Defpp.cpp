#include <iostream>
#include <string>
# define end ;
# define do {
# define endo }
# define print std::cout
# define str std::string
# define loop for
# define newline "\n"
# define input std::cin
# define either ||
# define also &&

// example
int main()
{
	
	str a = "" end
	if(false either a == "")
	do
		input >> a;
		print << a << newline end
		loop(int i; i < 100 ; i++)
		do
			print << a << i << newline;
		endo
	endo
}
