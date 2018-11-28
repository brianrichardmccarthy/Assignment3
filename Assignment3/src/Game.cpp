#include "Game.hpp"

Game::Game() {}
Game::~Game() {}

void Game::Run() {
	sf::Clock clock;

	while (window.isOpen()) {
		Render();
		if (!ProcessEvents()) break;
		Update(clock.restart());
	}

}

void Game::Update(const sf::Time& deltaTime) {}
void Game::Render() {}
bool Game::ProcessEvents() {}