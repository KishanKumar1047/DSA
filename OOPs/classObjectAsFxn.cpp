#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

class Gun{
    public:
        int ammo;
        int damage;
};

class Player {
    private :
    int score;
    Gun gun ; // class in class

    public :

    int getscore(){
        return score;
    }

    Gun getgun(){
        return gun;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setcore(int score){
        this->score = score; // pointer that provides link of that member , i think so
    }

};

int add(Player a, Player b){ // object as fxn
    return a.getscore() + b.getscore() ;
}
Player maxscore(Player a , Player b){
    if(a.getscore()>b.getscore()){
        return a;

    }
    else return b;
}

int main() {
    Player harsh; // static memory , alllocation , complie time
    harsh.setcore(20);
       Gun ak;
    ak.ammo = 90;
    ak.damage = 2390;

    Player Raghav;
    Raghav.setcore(45);
    Raghav.setGun(ak);
    Player *urvi = new Player;// dynamic memory allocation , run time
    // Player urviObject = *urvi;
    // urviObject.setcore(57);
    // or direct value ,i.e. *urvi = urvi->
    // cout<<Raghav.getgun();

 

    urvi->setcore(57);
    // cout<<add(harsh , Raghav)<<endl;
    cout<<urvi->getscore()<<endl;


    // Player ram = maxscore(harsh , Raghav);
    // cout<<ram.getscore();



    
    return 0;
}