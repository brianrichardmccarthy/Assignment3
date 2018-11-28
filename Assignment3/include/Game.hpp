#ifndef GAME_HPP
#define GAME_HPP

#include "SFML/Graphics.hpp"

class Game {

	private:
			sf::RenderWindow window;

			void Update(const sf::Time& deltaTime);
			void Render();
			bool ProcessEvents();

	public:
		Game();
		~Game();
		void Run();

		Game(const Game&) = delete;
		Game& operator=(const Game&) = delete;

};

#endif // !GAME_HPP