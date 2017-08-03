#include <SFML/Graphics.hpp>
#include <time.h>
#include <math.h>

using namespace sf;

//Constante radian para poder usar cosenos y senos, se multiplica por lo grados
float DEGTORAD = 0.017453f;

int main()
{
    srand(time(0));

	RenderWindow window(VideoMode(400, 400), "The Circle!");
    window.setFramerateLimit(60);

    CircleShape cir(10);
    cir.setFillColor(Color(rand()%255,rand()%255,rand()%255));
    cir.setOutlineThickness(.5);
    cir.setOutlineColor(Color(rand()%255, rand()%255, rand()%255));

    int x=200, y=200, dx=0, dy=0;
    //realiza la velocidad
    int vel = 1;
    //angulo donde va dibujar el punto negativos son hacia arriba y positivos hacia abajo
    float angle = 3;

	while (window.isOpen())
    {

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            angle+=7;
        }
        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            angle-=7;
        }
        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            if( vel<10 )
            {
                vel+=1;
            }
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            if( vel>1 )
            {
                vel-=1;
            }
        }

        //calcula el avance en x con la formula de coseno del angulo por el tamaño del radio del ciculo
        dx = vel * cos(angle*DEGTORAD);
        //calcula el avance en y con la formula de seno del angulo por el tamaño del radio del ciculo
        dy = vel * sin(angle*DEGTORAD);

        //le asignamos la nueva posicion de acuerdo a la posicion 0,0
        x += dx;
        y += dy;

        cir.setPosition(x,y);
        window.clear();
        window.draw(cir);

        window.display();
    }

    return 0;
}
