#include "Span.hpp"

void	test_span_functs(void);
void	test_add_range_of_elements(void);
void	test_big_quantity_of_numbers(void);

int	main(void)
{
	test_span_functs();
	std::cout << std::endl;

	test_add_range_of_elements();
	std::cout << std::endl;

	test_big_quantity_of_numbers();
	std::cout << std::endl;

}

void	test_span_functs(void)
{
	std::cout << "/////   test_span_functs()   /////" << std::endl;

	std::cout << "init Span(1)" << std::endl;
	Span	spanOne(1);

	std::cout << "adding 345 to Span(1)" << std::endl;
	spanOne.addElement(345);

	std::cout << "adding 456 to Span(1)" << std::endl;
	try { spanOne.addElement(456); }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "looking for shortest span" << std::endl;
	try { std::cout << spanOne.shortestSpan() << std::endl; }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "looking for longest span" << std::endl;
	try { std::cout << spanOne.longestSpan() << std::endl; }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	///////////////////////////////////////////////////////////////////////////

	std::cout << "init Span(2)" << std::endl;
	Span	spanTwo(2);

	std::cout << "adding 345 to Span(2)" << std::endl;
	spanTwo.addElement(345);

	std::cout << "adding 456 to Span(2)" << std::endl;
	try { spanTwo.addElement(456); }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "looking for shortest span" << std::endl;
	try { std::cout << spanTwo.shortestSpan() << std::endl; }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << "looking for longest span" << std::endl;
	try { std::cout << spanTwo.longestSpan() << std::endl; }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }
}

void	test_add_range_of_elements(void)
{
	std::cout << "/////   test_add_range_of_elements()   /////" << std::endl;
	try
	{
		std::cout << "creating span(11)" << std::endl;
		Span	berk(11);

		std::cout << "adding 10 elements" << std::endl;
		berk.addElement(1);
		berk.addElement(3);
		berk.addElement(5);
		berk.addElement(7);
		berk.addElement(9);
		berk.addElement(11);
		berk.addElement(13);
		berk.addElement(15);
		berk.addElement(17);

		std::cout << "adding element 19" << std::endl;
		try { berk.addElement(19); }
		catch (const std::exception& e) { std::cout << e.what() << std::endl; }

		std::vector<int>	test;
		test.push_back(21);
		test.push_back(23);
		test.push_back(25);
		test.push_back(27);
		test.push_back(29);
		test.push_back(31);
	
		std::cout << "adding range of elements" << std::endl;
		try { berk.addRangeOfElements(test.begin(), test.end()); }
		catch (const std::exception& e) { std::cout << e.what() << std::endl; }

		std::cout << "adding element 33" << std::endl;
		try { berk.addElement(33); }
		catch (const std::exception& e) { std::cout << e.what() << std::endl; }

		std::cout << "longestSpan: ";
		std::cout << berk.longestSpan() << std::endl;

		std::cout << "shortestSpan: ";
		std::cout << berk.shortestSpan() << std::endl;
	}
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }
}

void	test_big_quantity_of_numbers(void)
{
	std::cout << "/////   test_big_quantity_of_numbers()   /////" << std::endl;

	std::cout << "creating biiiig with 200000 quantity of elements" << std::endl;
	Span	biiiig(200000);

	std::cout << "adding -42 to biiiig" << std::endl;
	biiiig.addElement(-42);

	std::cout << "adding 42 to biiiig" << std::endl;
	biiiig.addElement(42);

	std::cout << "enough adding them one by one, lets add 200000 more" << std::endl;
	std::cout << "(please keep in mind that the last two couldn't be added.)" << std::endl;
	std::cout << "generating a classic std::vector<int> vec with 199996+3 elements and 199996 of them are 777" << std::endl;
	std::vector<int>	vec(199996, 777);

	std::cout << "adding the last items as 888, 999, 777" << std::endl;
	vec.push_back(888);
	vec.push_back(777);
	vec.push_back(999);

	std::cout << "addRangeOfElements call being made" << std::endl;
	try { biiiig.addRangeOfElements(vec.begin(), vec.end()); }
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl << "888 added, successfully in index 199998" << std::endl;
	std::cout << "777 added, successfully in index 199999 (last)" << std::endl;
	std::cout << "999 couldn't added, it's full" << std::endl << std::endl;

	std::cout << "let's see the {shortestSpan, longestSpan}" << std::endl;
	std::cout << "{" << biiiig.shortestSpan() << ", " << biiiig.longestSpan() << "}" << std::endl;
}