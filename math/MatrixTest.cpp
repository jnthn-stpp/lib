#include "cpptest.h"
class ExampleTestSuite : public Test::Suite
{
	public:
	ExampleTestSuite(){
		TEST_ADD(ExampleTestSuite::first_test)
}
	private:
        	void first_test();
};

void ExampleTestSuite::first_test(){
	TEST_ASSERT(1==1);
}

int main(){
	Test::TextOutput output(Test::TextOutput::Verbose);
	    ExampleTestSuite ets;
	        return ets.run(output) ? EXIT_SUCCESS : EXIT_FAILURE;
}
