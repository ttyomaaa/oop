#include "text_editor.h"

//конструкторы
TextEdit::TextEdit():
    text(""),
    operation(Operation::Inaction),
    position(0) {}

TextEdit::TextEdit(const string &s, const Operation &oper, const int &pos):
    text(s),
    operation(oper),
    position(pos) {}

TextEdit::TextEdit(const TextEdit &copy):
    text(copy.text),
    operation(copy.operation),
    position(copy.position) {}

//геттеры
const string& TextEdit::getText() const {
    return text;
}

Operation TextEdit::getOperation() const {
    return operation;
}

int TextEdit::getPosition() const {
    return position;
}

//сеттеры
void TextEdit::setText(const string &s) {
    text = s;
}

void TextEdit::setOperation(const Operation &op) {
    operation = op;
}

void TextEdit::setPosition(const int &pos) {
    position = pos;
}
