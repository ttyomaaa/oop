#include <string>

using std::string;

enum class Operation {
    Insert,
    Delete,
    Inaction
};

class TextEdit {
public:
    TextEdit(); //конструктор по умолчанию
    TextEdit(const string &s, const Operation &oper, const int &pos); //конструктор инициализации
    TextEdit(const TextEdit &copy); //конструктор копирования

    //геттеры
    const string& getText() const;
    Operation getOperation() const;
    int getPosition() const;

    //сеттеры
    void setText(const string &s);
    void setOperation(const Operation &oper);
    void setPosition(const int &pos);

private:
    string text;
    Operation operation;
    int position;
};
