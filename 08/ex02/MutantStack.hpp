#ifndef CPP08_EX02_MUTANTSTACK_HPP
# define CPP08_EX02_MUTANTSTACK_HPP

# include <stack>

template <typename T>
class	MutantStack : public std::stack<T> 
{
	public:
		MutantStack();
		MutantStack(const MutantStack& r);
		MutantStack	&operator=(const MutantStack& r);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef	typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef	typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin(void);
		reverse_iterator		rbegin(void);
		iterator				end(void);
		reverse_iterator		rend(void);

		const_iterator			begin(void)		const;
		const_reverse_iterator	rbegin(void)	const;
		const_iterator			end(void)		const;
		const_reverse_iterator	rend(void)		const;
};

#include "MutantStack.tpp"

#endif
