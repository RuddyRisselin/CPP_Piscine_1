#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();
    //AAnimal* animal = new AAnimal();  //Impossible because abstract class

    dog->makeSound();  // "Woof!"
    cat->makeSound();  // "Meow!"

    delete dog;
    delete cat;

    return 0;
}
