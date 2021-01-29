#include "SnakeGame.h"

int main()
{	
    snake.Print();

    system("cls");

    snake.load();
    
    snake.length=5;

    head.x=25;

    head.y=20;

    head.direction=RIGHT;

    snake.Boarder();

    snake.Food(); //to generate food coordinates initially

    snake.life=3; //number of extra lives

    bend[0]= head;

    snake.Move();   //initialing initial bend coordinate

	return 0;
}

