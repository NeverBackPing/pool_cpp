#pragma once

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
	private:
		T* _element;
		unsigned int _n;

	public:
		// Constructeur par défaut
		Array() : _element(NULL), _n(0)
		{
		}

		// Constructeur avec taille
		Array(unsigned int n) : _element(new T[n]), _n(n)
		{
			for (unsigned int i = 0; i < _n; ++i)
			{
				_element[i] = T(); // Appel du constructeur par défaut
			}
		}

		// Constructeur de copie
		Array(const Array& other) : _element(NULL), _n(0)
		{
			_n = other._n;
			_element = new T[_n];
			for (unsigned int i = 0; i < _n; ++i)
			{
				_element[i] = other._element[i];
			}
		}

		// Opérateur d’assignation
		Array& operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] _element;
				_n = other._n;
				_element = new T[_n];
				for (unsigned int i = 0; i < _n; ++i)
				{
					_element[i] = other._element[i];
				}
			}
			return *this;
		}

		// Destructeur
		~Array()
		{
			delete[] _element;
		}

		// Accès aux éléments avec vérification de l'index
		T& operator[](unsigned int index)
		{
			if (index >= _n)
			{
				throw std::out_of_range("Index out of bounds");
			}
			return _element[index];
		}

		const T& operator[](unsigned int index) const
		{
			if (index >= _n)
			{
				throw std::out_of_range("Index out of bounds");
			}
			return _element[index];
		}

		// Méthode size
		unsigned int size() const
		{
			return _n;
		}
};
