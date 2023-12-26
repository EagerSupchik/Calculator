#include "Button.h"

int main()
{
    RenderWindow win(VideoMode(600, 800), "Calculator");
    Event event;
    Butt b_1(15, 400, 120, 70, "1", Color::Magenta);
    Butt b_2(165, 400, 120, 70, "2", Color::Magenta);
    Butt b_3(315, 400, 120, 70, "3", Color::Magenta);
    Butt b_p(465, 400, 120, 70, "+", Color::Magenta);
    Butt b_4(15, 500, 120, 70, "4", Color::Magenta);
    Butt b_5(165, 500, 120, 70, "5", Color::Magenta);
    Butt b_6(315, 500, 120, 70, "6", Color::Magenta);
    Butt b_min(465, 500, 120, 70, "-", Color::Magenta);
    Butt b_7(15, 600, 120, 70, "7", Color::Magenta);
    Butt b_8(165, 600, 120, 70, "8", Color::Magenta);
    Butt b_9(315, 600, 120, 70, "9", Color::Magenta);
    Butt b_mul(465, 600, 120, 70, "*", Color::Magenta);
    Butt b_0(165, 700, 120, 70, "0", Color::Magenta);
    Butt b_eq(315, 700, 120, 70, "=", Color::Magenta);
    Butt b_div(465, 700, 120, 70, "/", Color::Magenta);

    while (win.isOpen())
    {
        while (win.pollEvent(event))
        {
            if (event.type == Event::Closed) win.close();
            b_1.mousePresBut(win, event);
            b_2.mousePresBut(win, event);
            b_3.mousePresBut(win, event);
            b_4.mousePresBut(win, event);
            b_5.mousePresBut(win, event);
            b_6.mousePresBut(win, event);
            b_7.mousePresBut(win, event);
            b_8.mousePresBut(win, event);
            b_9.mousePresBut(win, event);
            b_0.mousePresBut(win, event);
            b_p.mousePresBut(win, event);
            b_min.mousePresBut(win, event);
            b_mul.mousePresBut(win, event);
            b_div.mousePresBut(win, event);
            b_eq.mousePresBut(win, event);
        }

        win.clear();
        b_1.printButt(win);
        b_2.printButt(win);
        b_3.printButt(win);
        b_4.printButt(win);
        b_5.printButt(win);
        b_6.printButt(win);
        b_7.printButt(win);
        b_8.printButt(win);
        b_9.printButt(win);
        b_0.printButt(win);
        b_p.printButt(win);
        b_min.printButt(win);
        b_mul.printButt(win);
        b_div.printButt(win);
        b_eq.printButt(win);
        win.display();
    }
}