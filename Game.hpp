
#ifndef	GAME_HPP 
#define GAME_HPP

class Game 
{
	private:
		bool		gameStatus;	
		int		currentTime;
	
	public:
		//constructor & destructor
		Game();
		~Game();

		void run();
};

#endif
