#include "canvas.h"
#include <string>
#include <iostream>
int main() {
    int r, c;
    std::cin >> c >> r;
    Canvas canvas(r,c);
    canvas.Print();
    std::string q;
    while (std::cin >> q && q != "quit") {
        if (q == "add") {
            std::string shape;
            std::cin >> shape;
            int x, y, d, h;
            char brush;
            if (shape == "rect") {
                std::cin >> y >> x >> h >> d >> brush;
                Rectangle* rectangle = new Rectangle(x, y, d, h, brush);
                canvas.AddShape(rectangle);
            }
            else {
                std::cin >> y >> x >> d >> brush;
            }
            if (shape == "tri_up") {
                UpTriangle* ut = new UpTriangle(x, y, d, brush);
                canvas.AddShape(ut);
            }
            else if (shape == "tri_down") {
                DownTriangle* dt = new DownTriangle(x, y, d, brush);
                canvas.AddShape(dt);
            }
            else if (shape == "diamond") {
                Diamond* diamond = new Diamond(x, y, d, brush);
                canvas.AddShape(diamond);
            }
        }
        else if (q == "delete") {
            size_t shape;
            std::cin >> shape;
            canvas.DeleteShape(shape);
        }
        else if (q == "draw") {
            canvas.Print();
        }
        else if (q == "dump") {
            canvas.PrintShape();
        }
        else if (q == "resize") {
            int newWidth, newHeight;
            std::cin >> newWidth >> newHeight;
            canvas.Resize(newWidth, newHeight);
        }

    }
    return 0;
}
