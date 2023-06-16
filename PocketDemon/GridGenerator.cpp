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

void GridGenerator::BattleGrid()
{
	for (size_t y = 0; y < 2; y++)
	{
		std::vector<Button*> row;
		for (size_t x = 0; x < 2; x++)
		{
			
			Button* button = new Button();
			button->position.x = x * 320 + 800;
			button->position.y = y * 120 + 540;
			row.push_back(button);
			this->AddChild(button);
			
		}
		battleButtons.push_back(row);
	}
    
}