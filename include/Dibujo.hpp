#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>

using namespace std;

class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string palabra;

public:
    Dibujo() {
        this->posicionX=0;
        this->posicionY=0;
    }
    Dibujo(int posicionX,int posicionY) {
        this->posicionX=posicionX;
        this->posicionY=posicionY;
    }
    Dibujo(string palabra,int posicionX,int posicionY) {
        this->posicionX=posicionX;
        this->posicionY=posicionY;
        this->palabra=palabra;
    }

    void Dibujar(ftxui::Screen &Pantalla){
        int posicionPalabraX = 0;
        int posicionPalabraY = 0;
                       
        for (auto &&letra : palabra)
        {
            int posicionfinalX= this->posicionX+posicionPalabraX;
            int posicionfinalY= this->posicionY+posicionPalabraY;

            Pantalla.PixelAt(
                posicionfinalX,
                posicionfinalY
            ).character = letra;
            posicionPalabraX++;
        }
    }
    ~Dibujo() {}
};