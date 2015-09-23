#include "stdafx.h"
#include "Cart.h"
#include <iostream>
#include <ctime>

class Game {
public:
	Game():Game(10) {}
	
	Game(int n) {
		this->n = n;
		carts = new Cart[n];
	}

	void CreateRandomCarts() {
		srand(time(NULL));
		Cart* cart;
		for (int i = 0; i < this->n; i++){
			cart = new Cart;
			cart->suit = static_cast<Suit>(rand() % 4);
			cart->power = static_cast<Power>(rand() % 13); 
			this->carts[i] = *cart;
		}
	}

	void SortDeck() {
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n - 1; j++){
				if (static_cast<int>(this->carts[j].power) > static_cast<int>(this->carts[j + 1].power)){
					Cart tmp = this->carts[j + 1];
					this->carts[j + 1] = this->carts[j];
					this->carts[j] = tmp;
				}
			}
		}
	}

	void PrintDeck() {
		for (int i = 0; i < this->n; i++){
			std::cout << Power_strs[static_cast<int>(this->carts[i].power)] << std::endl;
			std::cout << Suit_strs[static_cast<int>(this->carts[i].suit)] << std::endl;
			std::cout << "--------------------------------" << std::endl;
		}
	}

private:
	Cart* carts;
	int n;
};
