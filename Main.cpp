#include <string>
#include <algorithm>
#include <iostream>
#include <exception>
#include "Figura.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include "Pieciokat.h"
#include "Szesciokat.h"
#include "Romb.h"
#include "Prostokat.h"


    int main(int argc, char* args[])
    {
        Figura* figura = nullptr;

        try{
            if(argc > 2)
            {
                

                std::string arg = args[1];
                char symbol;

                if(arg.length() == 1)
                {
                    symbol = arg[0];
                } else throw 105;

                switch (symbol)
                {
                case 'c':
                {
                    if(argc != 7) throw 104; //("Niezgodna liczba argumentow!");
                    
                    double boki[4] = {
                        std::stod(args[2]), std::stod(args[3]), std::stod(args[4]), std::stod(args[5])
                    };
                    double kat = std::stod(args[6]);

                    std::sort(boki, boki+4);
                    if(boki[0]<=0) throw 104;
                    
                    //std::cout<<boki[0]<<" "<<boki[1]<<" "<<boki[2]<<" "<<boki[3]<<" "<<std::endl;

                        if(boki[0] == boki[1] && boki[2] == boki[3])
                        {
                            if(boki[1] == boki[2]) {
                                if(kat == 90){
                                    figura = new Kwadrat(boki[0]);
                                    if(figura != nullptr)
                                        std::cout << "To jest kwadrat\n";
                                }
                                else {
                                    figura = new Romb(boki[0], kat);
                                    if(figura != nullptr)
                                        std::cout << "To jest romb\n";
                                }
                            }
                            else {
                                if(kat == 90)
                                    figura = new Prostokat(boki[0], boki[2]);
                                if(figura != nullptr)
                                    std::cout << "To jest prostokat\n";
                            }
                        }    

                        if(figura == nullptr)
                            throw 106; //("Czworokat musi byc rombem, prostokatem lub kwadratem!");

                }
                    break;
                case 'p':
                if(argc != 3) throw 104;
                    figura = new Pieciokat(std::stod(args[2]));
                    std::cout << "To jest pieciokat\n";
                    break;
                case 's':
                if(argc != 3) throw 104;
                    figura = new Szesciokat(std::stod(args[2]));
                    std::cout << "To jest szesciokat\n";
                    break;
                case 'o':
                if(argc != 3) throw 104;
                    figura = new Kolo(std::stod(args[2]));
                    std::cout << "To jest kolo\n";
                    break;
                
                default:
                    throw 105;
                    break;
                }


                std::cout << "Obwod: " << figura->obliczObwod() << std::endl;
                std::cout << "Pole: " << figura->obliczPole() << std::endl;
            }
            else 
            {
                throw 104;
            }

        } catch (std::invalid_argument e)
        {
            std::cout<<"Parametry musza byc liczbami zmiennoprzecinkowymi!"<<std::endl;
        } catch (std::out_of_range e2)
        {
            std::cout<<"Parametr poza zakresem zmiennej typu double!"<<std::endl;
        } catch (int eNumber)
        {
            switch (eNumber)
            {
            case 102:
                std::cout<<"Kat musi byc rozny od 90 st.!"<<std::endl;
                break;
            case 104:
                std::cout<<"Niezgodna liczba argumentow!"<<std::endl;
                break;
            case 105:
                std::cout<<"Pierwszy argument musi byc pojedyncza litera!"<<std::endl;
                break;
            case 106:
                std::cout<<"Czworokat musi byc rombem, prostokatem lub kwadratem!"<<std::endl;
                break;
            case 114:
                std::cout<<"Bok musi byc wiekszy od 0!"<<std::endl;
                break;
            case 115:
                std::cout<<"Kat musi byc w zakresie (0 - 180)!"<<std::endl;
                break;
            
            default:
                std::cout<<"Blad! Nr:" + eNumber<<std::endl;
                break;
            }
        }

        if(figura != nullptr)
            delete figura;
    }

