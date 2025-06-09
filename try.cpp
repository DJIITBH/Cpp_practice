#include<iostream>


class Matchbox
{
    public:
        Matchbox(int matchsticks){
            this->matchsticks = matchsticks;
        }

        void burn(int matchsticks)
        {
            if(matchsticks>0)
            {
                std::cout<< "matchstick burned"<<std::endl;
                this->matchsticks--;
            }
        }
        private:
        int matchsticks;
};

int main()
{
    Matchbox matchbox(10);
    matchbox.burn(1);
    return 0;
}

