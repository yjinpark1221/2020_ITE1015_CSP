#include "canvas.h"
#include <iostream>
Canvas::Canvas(size_t row, size_t col) : row(row), col(col) {
    std::vector<char> newRow(col, '.');
    canvas.resize(row, newRow);
}
Canvas::~Canvas() {}
void Canvas::Resize(size_t w, size_t h) {
    if(w < 0 || h < 0) return;
    std::vector<char> newRow (w, '.');
    std::vector<std::vector<char> > newCanvas(h, newRow);
    for (int i = 0; i < std::min(row, h); ++i) {
        for (int j = 0; j < std::min(col, w); ++j) {
            newCanvas[i][j] = canvas[i][j];
        }
    }
    this->row = h;
    this->col = w;
    canvas.clear();
    canvas = newCanvas;
}
bool Canvas::DrawPixel(int x, int y, char brush) {
    if (0 <= x && x < row && 0 <= y && y < col) {
        canvas[x][y] = brush;
        return true;
    }
    return false;
}
void Canvas::Print() {
    std::cout << " ";
    for(int j = 0; j < col; ++j) {
        std::cout << j % 10;
    }
    std::cout <<"\n";
    for (int i = 0; i < row; ++i) {
        std::cout << i % 10;
        for (int j = 0; j < col; ++j) {
            std::cout << canvas[i][j];
        }
        std::cout << "\n";
    }
}
void Canvas::Clear() {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            canvas[i][j] = '.';
        }
    }
}
void Canvas::AddShape(Shape* pShape) {
    v.push_back(pShape);
    pShape->Draw(this);
}
void Canvas::DeleteShape(size_t ii) {
    if (ii < 0 || ii >= v.size()) return;
    v.erase(v.begin() + ii);
    Clear();
    for (int i = 0; i < v.size(); ++i) {
        v[i]->Draw(this);
    }
}
void Canvas::PrintShape() {
    for(int i = 0; i < v.size(); ++i) {
        std::cout << i;
        v[i]->Print();
    }
}
Shape::Shape() {}
Shape::Shape(int x, int y, char brush) : x(x), y(y), brush(brush) {}
Shape::~Shape() {}
void Shape::Draw(Canvas* canvas) {}
void Shape::Print() {}

Rectangle::Rectangle (int x, int y, int w, int h, char brush) : Shape(x, y, brush), w(w), h(h) {}
Rectangle::~Rectangle() {};
void Rectangle::Draw(Canvas* pCanvas) {
    for (int i = x; i < x + w; ++i) {
        for (int j = y; j < y + h; ++j) {
            pCanvas->DrawPixel(i, j, brush);
        }
    }
}
void Rectangle::Print() {
    std::cout << " rect " << x << " " << y << " " << w << " " << h << " " << brush << "\n";
}

UpTriangle::UpTriangle(int x, int y, int h, char brush) : Shape(x, y, brush), h(h) {}
UpTriangle::~UpTriangle() {}
void UpTriangle::Draw(Canvas* pCanvas) {
    int cnt = 0;
    for (int i = x; i < x + h; ++i) {
        for (int j = y - cnt; j <= y + cnt; ++j) {
            pCanvas->DrawPixel(i, j, brush);
        }
        ++cnt;
    }
}
void UpTriangle::Print() {
    std::cout << " tri_up " << x << " " << y << " " << h << " " << brush << "\n";
}

DownTriangle::DownTriangle(int x, int y, int h, char brush) : Shape(x, y, brush), h(h) {}
DownTriangle::~DownTriangle() {}
void DownTriangle::Draw(Canvas* pCanvas) {
    int cnt = 0;
    for (int i = x; i >= x - h + 1; --i) {
        for (int j = y - cnt; j <= y + cnt; ++j) {
            pCanvas->DrawPixel(i, j, brush);
        }
        ++cnt;
    }
}
void DownTriangle::Print() {
    std::cout << " tri_down " << x << " " << y << " " << h << " " << brush << "\n";
}
Diamond::Diamond(int x, int y, int d, char brush) : Shape(x, y, brush), d(d) {}
Diamond::~Diamond() {}
void Diamond::Draw(Canvas* pCanvas) {
    int cnt = 0;
    for (int i = x; i < x + d - 1; ++i) {
        for (int j = y - cnt; j <= y + cnt; ++j) {
            pCanvas->DrawPixel(i, j, brush);
        }
        ++cnt;
    }
    for(int i = x + d - 1; cnt >= 0; ++i) {
        for (int j = y - cnt; j <= y + cnt; ++j) {
            pCanvas->DrawPixel(i, j, brush);
        }
        --cnt;
    }
}
void Diamond::Print() {
    std::cout << " diamond " << x << " " << y << " " << d << " " << brush << "\n";
}
