#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
using namespace std;
using namespace ftxui; 

int posicionInicialX = 0;
int posicionInicialY = 0;
int posicionTemporalX = 0;
int posicionY = 0;
string prueba = "DVD";

int main(int argc, char const *argv[])
{
    while(true)
    {
        posicionY++;
        this_thread::sleep_for(0.1s);
        auto Pantalla = Screen::Create(Dimension::Fixed(20),Dimension::Fixed(10));
        Render(Pantalla,border(text("Hola")));
        Pantalla.PixelAt(5,5).character = 'm';
        
               
        for (auto &&letra : prueba)
        {
            Pantalla.PixelAt(posicionX,posicionY).character = letra;
            posicionX++;
        }
        Pantalla.Print();
        cout<<Pantalla.ResetPosition();
        return 0;

    }
}