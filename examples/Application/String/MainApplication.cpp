#include "../../../library.hpp"

class MainApplication {
public:
		static void main(Array<String> arguments) {
			System::out::println("N = 10^8");
			register long int i;
			for (i=0; i<1000000000; i++) {
				String str;
				str += "hello world";
			}
		}
};

long int main(long int argc, char **argv) {
	return Application(MainApplication::main, argc, argv);
}
