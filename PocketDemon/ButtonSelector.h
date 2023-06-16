 #ifndef BUTTONSELECTOR_H 
#define BUTTONSELECTOR_H 

#include <common/entity.h>
#include <PocketDemon/GridGenerator.h>

class ButtonSelector : public Entity
{ 
public: 
    ButtonSelector(std::vector<std::vector<Button*>> MenuButtons); 
    virtual ~ButtonSelector(); 


	virtual void update(float deltaTime);

	void Selecting();

private:
   
    std::vector<std::vector<Button*>> _menuButtons;
    bool menuActive;
	int indexY;
	int indexX;

}; 
#endif // BUTTONSELECTOR_H  