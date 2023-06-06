#include "GridGenerator.h" 
GridGenerator::GridGenerator() 
{

} 
GridGenerator::~GridGenerator() 
{ 
}

void GridGenerator::update(float deltaTime)
{

}

void BattleGrid(int GridWidth, int GridHeight)
{
    BattleButtons = std::vector<Button*>();
	for (size_t y = 0; y < 1; y++)
	{
		for (size_t x = 0; x < 1; x++)
		{
			
			Button* button = new Button();
			button->position.x = x * 320 + 540;
			button->position.y = y * 32 + 800;
			BattleButtons.push_back(button);
			this->addChild(button);
			
		}
	}
    
}