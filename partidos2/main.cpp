    #include <iostream>
using namespace std;
int main(){
    int Brazil    =36;
    int Colombia  =25;
    int Uruguay   =24;
    int Chile     =23;
    int Argentina =23;
    int Peru      =21;
    int Paraguay  =21;
    int Ecuador   =20;
    int Bolivia   =10;
    int Venezuela = 7;



    int ganar  ;
    int empatar;
    int perder ;

    int part1;
    int part2;
    int part3;
    int part4;
    int part5;

    /*int partido1[2]=[Bolivia,Chile]
    int partido2[2]=[Colombia,Brasil]
    int partido3[2]=[Ecuador,Peru]
    int partido4[2]=[Argentina,Venezuela]
    int partido5[2]=[Paraguay,Uruguay]
    */


    int res[3]= {ganar, perder, empatar};
    int par[5]= {part1,part2,part3,part4,part5};
    int lenp = 5;

    for (int i=0; i<3; i++){
        if (res[i] =ganar){
                Paraguay=Paraguay  +3;
                Uruguay  =Uruguay    +0;
        }
        if (res[i] =empatar){
                Paraguay=Paraguay  +1;
                Uruguay  =Uruguay    +1;
        }
        if (res[i] =perder){
                Paraguay=Paraguay  +0;
                Uruguay  =Uruguay    +3;
                   }
        for (int i=0; i<3; i++){
                if (res[i] =ganar){
                        Argentina=Argentina  +3;
                        Venezuela  =Venezuela    +0;
                }
                if (res[i] =empatar){
                        Argentina=Argentina  +1;
                        Venezuela  =Venezuela    +1;
                }
                if (res[i] =perder){
                        Argentina=Argentina  +0;
                        Venezuela  =Venezuela    +3;
                }

                for (int i=0; i<3; i++){
                    if (res[i] =ganar){
                        Ecuador=Ecuador  +3;
                        Peru  =Peru    +0;
                    }
                    if (res[i] =empatar){
                        Ecuador=Ecuador  +1;
                        Peru  =Peru    +1;
                    }
                    if (res[i] =perder){
                        Ecuador=Ecuador  +0;
                        Peru  =Peru    +3;
                    }

                    for (int i=0; i<3; i++){

                        if (res[i] =ganar){
                            Colombia=Colombia  +3;
                            Brazil  =Brazil    +0;
                        }
                        if (res[i] =empatar){
                            Colombia=Colombia  +1;
                            Brazil  =Brazil    +1;
                        }
                        if (res[i] =perder){
                            Colombia=Colombia  +0;
                            Brazil  =Brazil    +3;
                        }

                        for (int i=0; i<3; i++){

                            if (res[i] =ganar){
                                Bolivia=Bolivia  +3;
                                Chile  =Chile    +0;
                                cout<< "Peru " <<Peru<<endl;
                                break;
                            }
                            if (res[i] =empatar){
                                Bolivia=Bolivia  +1;
                                Chile  =Chile    +1;
                                cout<< "Peru   " <<Peru<<endl;
                                break;
                            }
                            if (res[i] =perder){
                                Bolivia=Bolivia  +0;
                                Chile  =Chile    +3;
                                cout<< "Peru" <<Peru<<endl;
                                break;

                            }







                            }

                        }
                }
        }
    }
}
